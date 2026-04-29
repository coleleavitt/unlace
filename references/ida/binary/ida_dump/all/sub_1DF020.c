__int64 __fastcall sub_1DF020(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, int a6)
{
  __int64 v8; // rdi
  __int64 v9; // r14
  signed int v10; // ebx
  signed int v11; // eax
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 func; // rax
  unsigned int v15; // eax
  unsigned int v17; // [rsp+Ch] [rbp-6Ch]
  unsigned int v18; // [rsp+Ch] [rbp-6Ch]
  unsigned __int64 *v19; // [rsp+10h] [rbp-68h] BYREF
  __int64 v20; // [rsp+18h] [rbp-60h]
  __int128 v21; // [rsp+20h] [rbp-58h]
  unsigned __int64 v22; // [rsp+38h] [rbp-40h]

  v8 = *(_QWORD *)(a1 + 1496);
  v22 = __readfsqword(0x28u);
  v17 = sub_33E140(v8, 19, a2, a3, a5, a6);
  if ( v17 )
    return v17;
  v9 = 8;
  v10 = 1;
  if ( *(int *)(a1 + 64) <= 1 )
    return v17;
  while ( 1 )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 528) + v9) + 56LL);
    if ( !v12
      || (unsigned int)(*(_DWORD *)v12 - 55) > 1
      || *(_BYTE *)(v12 + 32) != 6
      || (v13 = *(_QWORD *)(v12 + 40), (func = get_func()) == 0)
      || *(_QWORD *)func != v13
      || (*(_BYTE *)(func + 18) & 2) == 0 )
    {
LABEL_4:
      v11 = *(_DWORD *)(a1 + 64);
      if ( v11 <= ++v10 )
        return v17;
      goto LABEL_5;
    }
    v19 = (unsigned __int64 *)func;
    v20 = 0;
    v21 = 0;
    v15 = sub_1DB100(a1, a2, v10, &v19, a3, 0);
    if ( v15 )
      break;
    if ( !v20 )
      goto LABEL_4;
    *(_QWORD *)&v21 = 0;
    ++v10;
    qfree();
    v11 = *(_DWORD *)(a1 + 64);
    if ( v11 <= v10 )
      return v17;
LABEL_5:
    v9 += 8;
    if ( v10 >= (unsigned int)v11 )
    {
      if ( !under_debugger )
        sub_383060(52719);
      BUG();
    }
  }
  if ( v20 )
  {
    v18 = v15;
    *(_QWORD *)&v21 = 0;
    qfree();
    return v18;
  }
  return v15;
}
