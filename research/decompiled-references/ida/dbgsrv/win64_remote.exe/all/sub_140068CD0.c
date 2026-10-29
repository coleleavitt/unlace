/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140068CD0
// Address: 0x0000000140068CD0

//----- (0000000140068CD0) ----------------------------------------------------
__int64 __fastcall sub_140068CD0(__int64 a1, _QWORD *a2, char *a3, unsigned int a4)
{
  __int64 v4; // r12
  char v6; // r13
  unsigned int v7; // r15d
  char *v8; // rbx
  char i; // si
  unsigned __int64 v10; // r8
  __int64 *v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r8
  __int64 *v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned __int64 v19; // r8
  int j; // edi
  char v21; // al
  __int64 v22; // r14
  _BYTE *v23; // rax
  __int64 v24; // rdi
  _BYTE *v25; // rax
  unsigned __int64 v26; // rax
  char *v27; // rax
  unsigned __int64 v28; // r8
  void **v29; // r8
  void *v30; // r9
  void *v31; // rcx
  unsigned __int64 v32; // rdx
  __int64 v33; // rbx
  char v34; // [rsp+20h] [rbp-28h]
  __int128 v35; // [rsp+28h] [rbp-20h] BYREF
  unsigned __int64 v36; // [rsp+38h] [rbp-10h]
  int v39; // [rsp+A0h] [rbp+58h]
  unsigned int v40; // [rsp+A8h] [rbp+60h]

  v39 = (int)a3;
  v4 = a1;
  if ( !a3 )
    return 0;
  v35 = 0;
  v36 = 0;
  v6 = 0;
  v7 = a4 >> 2;
  LOBYTE(v7) = (a4 & 4) != 0;
  v40 = v7;
  v8 = sub_14006A360(a3);
  for ( i = *v8; *v8; i = *v8 )
  {
    ++v8;
    if ( i == 34 )
    {
      if ( v6 )
      {
        v6 = 0;
        if ( *v8 >= 0 && isspace((unsigned __int8)*v8) || !*v8 )
        {
          v10 = *(_QWORD *)(v4 + 8) + 1LL;
          if ( v10 > *(_QWORD *)(v4 + 16) )
            *(_QWORD *)v4 = sub_14005ABE0(v4, *(void **)v4, v10, 0x18u);
          v11 = (__int64 *)(*(_QWORD *)v4 + 24LL * *(_QWORD *)(v4 + 8));
          *v11 = 0;
          v11[1] = 0;
          v11[2] = 0;
          ++*(_QWORD *)(v4 + 8);
          v12 = *v11;
          v13 = v11[1];
          v14 = v11[2];
          *(_OWORD *)v11 = v35;
          v11[2] = v36;
          *(_QWORD *)&v35 = v12;
          *((_QWORD *)&v35 + 1) = v13;
          v36 = v14;
          LOBYTE(v7) = 0;
          v40 = v7;
        }
        v8 = sub_14006A360(v8);
      }
      else
      {
        v6 = 34;
      }
    }
    else if ( v6 || (i & 0xFFFFFF80) != 0 || !isspace((unsigned __int8)i) )
    {
      v34 = 1;
      if ( (_BYTE)v7 )
        goto LABEL_41;
      for ( j = 0; i == 92; ++v8 )
      {
        ++j;
        i = *v8;
      }
      if ( i == 34 )
      {
        if ( (j & 1) != 0 )
        {
          v34 = 0;
          v21 = 0;
          if ( !v6 )
            v21 = 34;
          v6 = v21;
        }
        else if ( v6 && *v8 == 34 )
        {
          i = 34;
          ++v8;
        }
        j /= 2;
      }
      if ( j )
      {
        do
        {
          --j;
          v22 = *((_QWORD *)&v35 + 1) - 1LL;
          if ( !*((_QWORD *)&v35 + 1) )
            v22 = 0;
          if ( v22 + 2 <= v36 )
          {
            v23 = (_BYTE *)v35;
          }
          else
          {
            v23 = sub_14005ABE0((__int64)&v35, (void *)v35, v22 + 2, 1u);
            *(_QWORD *)&v35 = v23;
          }
          *((_QWORD *)&v35 + 1) = v22 + 2;
          v23[v22] = 92;
          *(_BYTE *)(v35 + v22 + 1) = 0;
        }
        while ( j );
        v4 = a1;
        v7 = v40;
      }
      if ( v34 )
      {
LABEL_41:
        v24 = *((_QWORD *)&v35 + 1) - 1LL;
        if ( !*((_QWORD *)&v35 + 1) )
          v24 = 0;
        if ( v24 + 2 <= v36 )
        {
          v25 = (_BYTE *)v35;
        }
        else
        {
          v25 = sub_14005ABE0((__int64)&v35, (void *)v35, v24 + 2, 1u);
          *(_QWORD *)&v35 = v25;
        }
        *((_QWORD *)&v35 + 1) = v24 + 2;
        v25[v24] = i;
        *(_BYTE *)(v35 + v24 + 1) = 0;
      }
      if ( ((i - 60) & 0xFD) == 0 && !v6 && !(_BYTE)v7 )
      {
        v26 = *((_QWORD *)&v35 + 1) - 1LL;
        if ( !*((_QWORD *)&v35 + 1) )
          v26 = 0;
        if ( v26 <= 2 )
        {
          if ( a2 )
          {
            v27 = sub_1400684D0((char **)&v35, v39, v8, a2);
            if ( v27 )
            {
              v8 = v27;
              *((_QWORD *)&v35 + 1) = 0;
            }
          }
        }
      }
    }
    else
    {
      v15 = *(_QWORD *)(v4 + 8) + 1LL;
      if ( v15 > *(_QWORD *)(v4 + 16) )
        *(_QWORD *)v4 = sub_14005ABE0(v4, *(void **)v4, v15, 0x18u);
      v16 = (__int64 *)(*(_QWORD *)v4 + 24LL * *(_QWORD *)(v4 + 8));
      *v16 = 0;
      v16[1] = 0;
      v16[2] = 0;
      ++*(_QWORD *)(v4 + 8);
      v17 = *v16;
      v18 = v16[1];
      v19 = v16[2];
      *(_OWORD *)v16 = v35;
      v16[2] = v36;
      *(_QWORD *)&v35 = v17;
      *((_QWORD *)&v35 + 1) = v18;
      v36 = v19;
      v8 = sub_14006A360(v8);
      LOBYTE(v7) = 0;
      v40 = v7;
    }
  }
  if ( *((_QWORD *)&v35 + 1) <= 1u )
  {
    v30 = (void *)v35;
  }
  else
  {
    v28 = *(_QWORD *)(v4 + 8) + 1LL;
    if ( v28 > *(_QWORD *)(v4 + 16) )
      *(_QWORD *)v4 = sub_14005ABE0(v4, *(void **)v4, v28, 0x18u);
    v29 = (void **)(*(_QWORD *)v4 + 24LL * *(_QWORD *)(v4 + 8));
    *v29 = nullptr;
    v29[1] = nullptr;
    v29[2] = nullptr;
    ++*(_QWORD *)(v4 + 8);
    v30 = *v29;
    v31 = v29[1];
    v32 = (unsigned __int64)v29[2];
    *(_OWORD *)v29 = v35;
    v29[2] = (void *)v36;
    *(_QWORD *)&v35 = v30;
    *((_QWORD *)&v35 + 1) = v31;
    v36 = v32;
  }
  v33 = *(_QWORD *)(v4 + 8);
  if ( v30 )
  {
    *((_QWORD *)&v35 + 1) = 0;
    j_free(v30);
  }
  return v33;
}
// 140068D5D: conditional instruction was optimized away because r13.1==22
