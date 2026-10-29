/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46D470
// Address: 0x000000000046D470

//----- (000000000046D470) ----------------------------------------------------
__int64 __fastcall sub_46D470(int *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebp
  __int64 v7; // rax
  unsigned __int64 v8; // rsi
  void *v9; // rcx
  char *v10; // rdi
  __int64 v11; // r12
  __int64 v12; // rbx
  char *v13; // rax
  void *v14; // rdx
  char v16; // [rsp+7h] [rbp-81h] BYREF
  __int64 v17; // [rsp+8h] [rbp-80h] BYREF
  void *v18; // [rsp+10h] [rbp-78h] BYREF
  __int128 v19; // [rsp+18h] [rbp-70h]
  int v20; // [rsp+30h] [rbp-58h] BYREF
  void *ptr; // [rsp+38h] [rbp-50h]
  __int128 v22; // [rsp+40h] [rbp-48h]
  unsigned __int64 v23; // [rsp+58h] [rbp-30h]

  v23 = __readfsqword(0x28u);
  v6 = sub_453C40((__int64)a1, a2, a3, a4);
  if ( !(_BYTE)v6 )
  {
    v7 = *((_QWORD *)a1 + 85);
    v18 = nullptr;
    v19 = 0;
    v8 = (int)v7;
    if ( !v7 )
      v8 = a1[194];
    if ( v8 )
    {
      v20 = -2;
      ptr = (void *)-1LL;
      v22 = 0;
      sub_4586A0((__int64)&v18, v8, (__int64)&v20);
      if ( v20 >= -1 && ptr )
      {
        *(_QWORD *)&v22 = 0;
        j__free(ptr);
      }
      v9 = v18;
    }
    else
    {
      v9 = nullptr;
    }
    if ( (*(unsigned int (__fastcall **)(int *, _QWORD, __int64, void *, _QWORD))(*(_QWORD *)a1 + 224LL))(
           a1,
           a2,
           1,
           v9,
           0) == 1
      && (*(__int64 (__fastcall **)(int *, _QWORD, char *, __int64, _QWORD))(*(_QWORD *)a1 + 288LL))(
           a1,
           *((_QWORD *)v18 + 4 * a1[196] + 1),
           &v16,
           1,
           0) == 1
      && (unsigned __int8)(v16 + 62) <= 1u )
    {
      v17 = -1;
      if ( (*(__int64 (__fastcall **)(int *, _QWORD, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 288LL))(
             a1,
             *((_QWORD *)v18 + 4 * a1[195] + 1),
             &v17,
             8,
             0) == 8 )
        LOBYTE(v6) = v17 == a4;
    }
    v10 = (char *)v18;
    if ( v18 )
    {
      v11 = v19;
      if ( (_QWORD)v19 )
      {
        v12 = 0;
        do
        {
          v13 = &v10[32 * v12];
          if ( *(int *)v13 >= -1 )
          {
            v14 = *((void **)v13 + 1);
            if ( v14 )
            {
              *((_QWORD *)v13 + 2) = 0;
              j__free(v14);
              v10 = (char *)v18;
            }
          }
          ++v12;
        }
        while ( v11 != v12 );
      }
      *(_QWORD *)&v19 = 0;
      j__free(v10);
    }
  }
  return v6;
}
