__int64 __fastcall sub_437180(
        __int64 a1,
        const char *a2,
        unsigned int a3,
        char a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  const char *v12; // r12
  unsigned int v13; // ebp
  __int64 v15; // rdx
  _QWORD *v17; // rax
  _QWORD *v18; // rbx
  __int64 (__fastcall *v19)(_QWORD *, __int64, unsigned int, unsigned int); // rax
  __int64 v20; // rdi
  __int64 (*v21)(); // rax
  __int64 v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __m128 v26; // xmm4
  __m128 v27; // xmm5
  __int64 v28; // rdx
  __int64 v29; // r13
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // [rsp+0h] [rbp-48h] BYREF
  __int128 v34; // [rsp+8h] [rbp-40h]
  unsigned __int64 v35; // [rsp+18h] [rbp-30h]

  v12 = a2;
  v13 = a1;
  v35 = __readfsqword(0x28u);
  if ( a4 )
  {
    v15 = (unsigned int)a1;
    a2 = "AUTOHIDE REGISTRY\nHIDECANCEL\nSync files to commit %d?";
    a1 = 1;
    if ( (unsigned int)sub_1698A0(1, (int)"AUTOHIDE REGISTRY\nHIDECANCEL\nSync files to commit %d?", v15) != 1 )
      return 1;
  }
  v17 = sub_426230(a1, a2);
  v18 = (_QWORD *)sub_417080((__int64)v17);
  v19 = *(__int64 (__fastcall **)(_QWORD *, __int64, unsigned int, unsigned int))(*v18 + 376LL);
  if ( v19 == sub_418E80 )
  {
    v20 = v18[1];
    if ( !v20 || (v21 = *(__int64 (**)())(*(_QWORD *)v20 + 480LL), v21 != sub_178B60) && (unsigned __int8)v21() )
    {
      LODWORD(v12) = 52;
      goto LABEL_18;
    }
    a5 = 0;
    v34 = 0;
    v22 = v18[1];
    v33 = 0;
    v12 = (const char *)(*(unsigned int (__fastcall **)(__int64, __int64 *, const char *, _QWORD, _QWORD))(*(_QWORD *)v22 + 344LL))(
                          v22,
                          &v33,
                          v12,
                          v13,
                          a3);
    (*(void (__fastcall **)(_QWORD *, const char *, __int64 *))(*v18 + 24LL))(v18, v12, &v33);
    v28 = v33;
    if ( v33 )
    {
      v29 = v34;
      if ( (_QWORD)v34 )
      {
        v30 = 0;
        do
        {
          v31 = v28 + 32 * v30;
          v32 = *(_QWORD *)(v31 + 8);
          if ( v32 )
          {
            *(_QWORD *)(v31 + 16) = 0;
            qfree(v32, v12);
            v28 = v33;
          }
          ++v30;
        }
        while ( v29 != v30 );
      }
      *(_QWORD *)&v34 = 0;
      *(double *)a5.m128_u64 = qfree(v28, v12);
    }
  }
  else
  {
    LODWORD(v12) = v19(v18, (__int64)v12, v13, a3);
  }
  if ( !(_DWORD)v12 )
  {
    sub_169700((int)"ok sync to commit %d\n", v13, v28, v23, v24, v25, a5, a6, a7, a8, v26, v27, a11, a12, v33);
    return 1;
  }
LABEL_18:
  sub_416980((unsigned int)v12, (__int64)"Failed to get revision");
  return 0;
}
