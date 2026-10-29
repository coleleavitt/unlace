/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46F530
// Address: 0x000000000046F530

//----- (000000000046F530) ----------------------------------------------------
__int64 __fastcall sub_46F530(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 (*v4)(void); // rax
  __int64 v5; // r12
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rsi
  unsigned int v10; // ebx
  __int64 (__fastcall *v12)(); // rax
  const char *v13; // rax
  const char *v14; // rbx
  size_t v15; // rax
  size_t v16; // rbp
  void *v17; // rdi
  unsigned __int64 v18; // r12
  void *v19; // rax
  _QWORD v20[7]; // [rsp+0h] [rbp-38h] BYREF

  v3 = *a1;
  v20[1] = __readfsqword(0x28u);
  v4 = *(__int64 (**)(void))(v3 + 24);
  if ( (char *)v4 == (char *)sub_46F3D0 )
    v5 = a1[12];
  else
    v5 = v4();
  if ( !v5 || *((_BYTE *)a1 + 8) )
  {
    return (unsigned int)-1;
  }
  else
  {
    sub_4700C0((__int64)a2);
    v6 = *a2;
    v7 = a2[1];
    sub_46F240(v20, v5, 0, v7);
    while ( 1 )
    {
      if ( v7 <= 0 )
      {
        v10 = 0;
        goto LABEL_10;
      }
      v8 = sub_46EFD0(v5);
      v9 = v8;
      if ( v8 < 0 )
        break;
      v7 -= v8;
      v6 += v8;
      sub_46F280(v20);
    }
    v12 = *(__int64 (__fastcall **)())(*a1 + 48);
    if ( v12 != nullsub_10 )
      ((void (__fastcall *)(__int64 *, __int64))v12)(a1, v9);
    *((_BYTE *)a1 + 8) = 1;
    if ( (unsigned int)sub_46EFF0(v5) != -15059582 )
    {
      v13 = (const char *)sub_46F000(v5);
      v14 = v13;
      if ( v13 && (v15 = strlen(v13), (v16 = v15) != 0) )
      {
        v17 = (void *)a1[2];
        v18 = v15 + 1;
        if ( a1[4] < v15 + 1 )
        {
          v19 = sub_481540((__int64)(a1 + 2), (void *)a1[2], v18, 1u);
          a1[2] = (__int64)v19;
          v17 = v19;
        }
        a1[3] = v18;
        memmove(v17, v14, v16);
        *(_BYTE *)(a1[2] + v16) = 0;
      }
      else
      {
        a1[3] = 0;
      }
    }
    v10 = -1;
LABEL_10:
    sub_46F260(v20);
  }
  return v10;
}
// 45B180: using guessed type __int64 __fastcall nullsub_10();
