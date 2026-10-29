__int64 __fastcall sub_F260(__int64 a1, __int64 *a2, __int64 *a3)
{
  const char *v5; // rax
  char *v6; // rax
  char *v7; // rbx
  size_t v8; // rax
  size_t v9; // r12
  unsigned __int8 *v11; // r14
  int v12; // esi
  const char *v13; // rax
  void *v14; // rdi
  size_t v15; // r13
  char *v16; // rax
  char *v17; // rbx
  size_t v18; // rax
  size_t v19; // r12
  __int64 v20; // rax
  void *v21; // rdi
  size_t v22; // r13
  __int64 v23; // rax
  unsigned __int16 v24; // [rsp+Eh] [rbp-5Ah] BYREF
  __int16 v25; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int16 v26; // [rsp+12h] [rbp-56h]
  unsigned __int16 v27; // [rsp+14h] [rbp-54h]
  unsigned __int64 v28; // [rsp+38h] [rbp-30h]

  v28 = __readfsqword(0x28u);
  v5 = sub_9380(a1, 0, &v24);
  if ( v5 )
  {
    if ( a2 )
      sub_F1A0(a2, (__int64)"AR import header (%s)", v5);
    if ( a3 )
    {
      v6 = sub_B130(a1, v24);
      v7 = v6;
      if ( v6 && (v8 = strlen(v6), (v9 = v8) != 0) )
      {
        v14 = (void *)*a3;
        v15 = v8 + 1;
        if ( a3[2] < v8 + 1 )
        {
          v20 = qvector_reserve(a3, *a3, v8 + 1, 1);
          *a3 = v20;
          v14 = (void *)v20;
        }
        a3[1] = v15;
        memmove(v14, v7, v9);
        *(_BYTE *)(*a3 + v9) = 0;
      }
      else
      {
        a3[1] = 0;
      }
    }
    return 1;
  }
  else
  {
    qlseek(*(_QWORD *)(a1 + 8), 0, 0);
    if ( qlread(*(_QWORD *)(a1 + 8), &v25, 28) != 28 )
      return 0;
    v11 = (unsigned __int8 *)(a1 + 382);
    if ( v25 == 23117 )
    {
      v12 = v27 << 9;
      if ( v26 )
        v12 = v12 + v26 - 512;
      v11 = (unsigned __int8 *)(a1 + 382);
      v13 = sub_7A10(a1, v12, 332, (unsigned __int8 *)(a1 + 382), &v24);
      if ( v13 )
        goto LABEL_19;
    }
    v13 = sub_7A10(a1, 0, 0, v11, &v24);
    if ( v13 )
    {
LABEL_19:
      if ( a2 )
        sub_F1A0(a2, (__int64)"COFF (%s)", v13);
      if ( a3 )
      {
        v16 = sub_B130(a1, v24);
        v17 = v16;
        if ( v16 && (v18 = strlen(v16), (v19 = v18) != 0) )
        {
          v21 = (void *)*a3;
          v22 = v18 + 1;
          if ( a3[2] < v18 + 1 )
          {
            v23 = qvector_reserve(a3, *a3, v18 + 1, 1);
            *a3 = v23;
            v21 = (void *)v23;
          }
          a3[1] = v22;
          memmove(v21, v17, v19);
          *(_BYTE *)(*a3 + v19) = 0;
        }
        else
        {
          a3[1] = 0;
        }
      }
      return 32778;
    }
    else
    {
      return 0;
    }
  }
}

