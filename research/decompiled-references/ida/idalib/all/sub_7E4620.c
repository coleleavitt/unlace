unsigned __int64 __fastcall sub_7E4620(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // r14
  unsigned int *v4; // rbx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rbp
  unsigned int *v8; // r15
  int v9; // r13d
  char v10; // cl
  __int64 v11; // rax
  __int64 *p_ptr; // r12
  size_t v13; // rax
  size_t v14; // rcx
  void *v15; // rdi
  int v17; // eax
  _BYTE *v18; // rsi
  __int64 v19; // rax
  unsigned int v20; // esi
  int v21; // eax
  __int64 v22; // [rsp+0h] [rbp-C8h]
  __int64 v23; // [rsp+10h] [rbp-B8h]
  __int64 v26; // [rsp+30h] [rbp-98h]
  void *v27; // [rsp+38h] [rbp-90h] BYREF
  __int128 v28; // [rsp+40h] [rbp-88h]
  __int64 v29; // [rsp+50h] [rbp-78h]
  void *ptr; // [rsp+58h] [rbp-70h] BYREF
  __int128 v31; // [rsp+60h] [rbp-68h]
  _BYTE v32[10]; // [rsp+7Eh] [rbp-4Ah] BYREF
  unsigned __int64 v33[8]; // [rsp+88h] [rbp-40h] BYREF

  v33[0] = __readfsqword(0x28u);
  v2 = a2[1];
  v28 = 0;
  v26 = 0;
  v27 = nullptr;
  v29 = 0;
  ptr = nullptr;
  v31 = 0;
  v23 = v2;
  if ( !v2 )
    goto LABEL_22;
  v22 = 0;
  v3 = 0;
  do
  {
    v4 = (unsigned int *)(v3 + *a2);
    v5 = *((_QWORD *)v4 + 1);
    v6 = v5 >> 20;
    if ( (v5 & 0xFF00000) != 0 )
    {
      if ( (_QWORD)v28 )
      {
        if ( (_DWORD)v26 == *v4 )
        {
          v17 = HIDWORD(v26);
        }
        else
        {
          sub_3A0970((__int64 *)&v27, 0);
          sub_3A0970((__int64 *)&v27, *v4);
          LODWORD(v26) = *v4;
          v17 = 0;
        }
      }
      else
      {
        sub_3A0970((__int64 *)&v27, *v4);
        LODWORD(v26) = *v4;
        v17 = HIDWORD(v26);
      }
      sub_3A0970((__int64 *)&v27, v4[1] - v17);
      v18 = v27;
      HIDWORD(v26) = v4[1];
      v19 = v28;
      if ( *((_QWORD *)&v28 + 1) < (unsigned __int64)(v28 + 1) )
      {
        v27 = (void *)qvector_reserve(&v27, v27, v28 + 1, 1);
        v18 = v27;
        v19 = v28;
      }
      v18[v19] = v6;
      *(_QWORD *)&v28 = v28 + 1;
      v5 = *((_QWORD *)v4 + 1);
      v7 = HIDWORD(v5);
      if ( !HIDWORD(v5) )
        goto LABEL_5;
LABEL_31:
      v20 = *v4;
      if ( (_QWORD)v31 )
      {
        if ( (_DWORD)v29 == v20 )
        {
          v21 = HIDWORD(v29);
        }
        else
        {
          sub_3A0970((__int64 *)&ptr, 0);
          sub_3A0970((__int64 *)&ptr, *v4);
          v29 = *v4;
          v21 = 0;
        }
      }
      else
      {
        sub_3A0970((__int64 *)&ptr, v20);
        LODWORD(v29) = *v4;
        v21 = HIDWORD(v29);
      }
      sub_3A0970((__int64 *)&ptr, v4[1] - v21);
      HIDWORD(v29) = v4[1];
      sub_3A0970((__int64 *)&ptr, v7);
      v5 = *((_QWORD *)v4 + 1);
      goto LABEL_5;
    }
    v7 = HIDWORD(v5);
    if ( HIDWORD(v5) )
      goto LABEL_31;
LABEL_5:
    v8 = v4 + 4;
    v9 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v10 = 4 * (v9 + (v9 > 1) + 5);
        v11 = v5 & (15LL << v10);
        if ( !v11 )
          goto LABEL_9;
        if ( v9 > 1 )
        {
          p_ptr = (__int64 *)&ptr;
          if ( v11 != 5LL << v10 )
            goto LABEL_9;
          goto LABEL_12;
        }
        if ( v11 == 5LL << v10 )
          break;
        ++v9;
        v8 += 68;
      }
      p_ptr = (__int64 *)&v27;
LABEL_12:
      v13 = pack_dq(v32, v33, *(_QWORD *)v8 + 1LL) - (_QWORD)v32;
      if ( v13 )
        sub_7DE6E0(p_ptr, v32, v13);
      sub_3A0A80(p_ptr, *((_QWORD *)v8 + 1) + 1LL);
      sub_3A0A80(p_ptr, *((_QWORD *)v8 + 2) + 1LL);
      sub_3A0970(p_ptr, v8[6]);
LABEL_9:
      ++v9;
      v8 += 68;
      if ( v9 == 8 )
        break;
      v5 = *((_QWORD *)v4 + 1);
    }
    ++v22;
    v3 += 2192;
  }
  while ( v23 != v22 );
  if ( (_QWORD)v28 )
  {
    sub_7E3F90(a1, 0xAu, v27, v28);
    v14 = v31;
    v15 = ptr;
    if ( !(_QWORD)v31 )
      goto LABEL_20;
LABEL_40:
    sub_7E3F90(a1, 0xBu, v15, v14);
    v15 = ptr;
    goto LABEL_20;
  }
  v14 = v31;
  v15 = ptr;
  if ( (_QWORD)v31 )
    goto LABEL_40;
LABEL_20:
  if ( v15 )
  {
    *(_QWORD *)&v31 = 0;
    qfree(v15);
  }
LABEL_22:
  if ( v27 )
  {
    *(_QWORD *)&v28 = 0;
    qfree(v27);
  }
  return v33[0] - __readfsqword(0x28u);
}
