__int64 __fastcall sub_CE080(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 bpt_kernel_interface; // rax
  __int64 v5; // rdi
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // [rsp+0h] [rbp-38h] BYREF
  __int128 v9; // [rsp+8h] [rbp-30h]
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  v1 = 0;
  if ( (dword_245190 & 0x20000) != 0 )
  {
    v8 = 0;
    v9 = 0;
    bpt_kernel_interface = get_bpt_kernel_interface();
    (*(void (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)bpt_kernel_interface + 56LL))(
      bpt_kernel_interface,
      &v8,
      a1);
    if ( (_QWORD)v9 )
    {
      v5 = v8;
      v6 = 0;
      while ( *(_DWORD *)(*(_QWORD *)(v8 + 8 * v6) + 64LL) != 4 )
      {
        if ( ++v6 == (_QWORD)v9 )
          goto LABEL_10;
      }
      v1 = 0;
    }
    else
    {
LABEL_10:
      v7 = sub_CDFE0(8, a1, 1);
      v5 = v8;
      LOBYTE(v1) = v7 == 0;
    }
    if ( v5 )
    {
      *(_QWORD *)&v9 = 0;
      qfree();
    }
  }
  return v1;
}

