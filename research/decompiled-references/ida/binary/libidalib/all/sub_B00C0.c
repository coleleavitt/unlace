__int64 __fastcall sub_B00C0(__int64 a1, __int64 a2, int a3, __int64 *a4)
{
  unsigned int v6; // eax
  unsigned int v7; // ebx
  const void *v8; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // r14
  __int64 linput; // rbp
  int v14; // [rsp+Ch] [rbp-5Ch]
  _BYTE v15[40]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v16; // [rsp+38h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  v6 = sub_9FA30(a1, a2, (__int64)a4);
  if ( !(_BYTE)v6 )
    return 0;
  v7 = v6;
  if ( !a3 )
    return v7;
  if ( *(_BYTE *)a1 > 3u
    && (qfread() != 32
     || (v10 = *(_QWORD *)(a1 + 8), v15[31] = 0, sub_9C440(v10 + 240, v15), *(_BYTE *)a1 > 8u)
     && (qfread() != 4
      || (sub_A52F0((__int64 *)(*(_QWORD *)(a1 + 8) + 368LL), (unsigned int)v14), v14) && v14 != qfread()))
    || qfread() != 4 )
  {
    if ( a4 )
    {
      v8 = (const void *)qerrstr();
      sub_9C440((__int64)a4, v8);
    }
    return 0;
  }
  if ( v14 <= 0 )
  {
    if ( a4 )
    {
      v7 = 0;
      sub_9C440((__int64)a4, "illegal trace data");
      return v7;
    }
    return 0;
  }
  v11 = qftell();
  v12 = qfsize() - v11;
  linput = make_linput();
  qlseek();
  v7 = sub_AFED0(a1, linput, v12, (unsigned int)v14, a4);
  unmake_linput();
  if ( (_BYTE)v7
    && *(_BYTE *)a1 > 8u
    && !dword_25274C
    && dbg
    && *(_DWORD *)(dbg + 16LL) == 12
    && *(_QWORD *)(*(_QWORD *)(a1 + 8) + 376LL) )
  {
    sub_9E1E0();
    sub_9E1E0();
  }
  mark_builtin_widgets();
  return v7;
}

