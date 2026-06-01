__int64 __fastcall sub_23D800(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 bpt_kernel_interface; // rax
  const char *v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // [rsp+0h] [rbp-38h] BYREF
  __int128 v11; // [rsp+8h] [rbp-30h]
  unsigned __int64 v12; // [rsp+18h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  v2 = 0;
  if ( (dword_8BA5B0 & 0x20000) != 0 )
  {
    v10 = 0;
    v11 = 0;
    bpt_kernel_interface = get_bpt_kernel_interface(a1, a2);
    v6 = (const char *)&v10;
    (*(void (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)bpt_kernel_interface + 56LL))(
      bpt_kernel_interface,
      &v10,
      a1);
    if ( (_QWORD)v11 )
    {
      v7 = v10;
      v8 = 0;
      while ( *(_DWORD *)(*(_QWORD *)(v10 + 8 * v8) + 64LL) != 4 )
      {
        if ( ++v8 == (_QWORD)v11 )
          goto LABEL_10;
      }
      v2 = 0;
    }
    else
    {
LABEL_10:
      v6 = (const char *)a1;
      v9 = sub_23D770(8u, a1, 1, 0.0);
      v7 = v10;
      LOBYTE(v2) = v9 == 0;
    }
    if ( v7 )
    {
      *(_QWORD *)&v11 = 0;
      qfree(v7, v6);
    }
  }
  return v2;
}
