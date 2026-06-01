__int64 __fastcall sub_9C6970(__int64 a1, __int64 *a2, __int64 a3, char a4)
{
  unsigned int v4; // r15d
  __int64 v6; // rsi
  unsigned int v7; // edx
  unsigned __int64 v8; // rax
  __int64 *v9; // rsi
  __int64 v10; // rdx
  unsigned int v11; // edx
  char v12; // r14
  _QWORD *v13; // rdi
  __int64 v14; // rax
  char v15; // r8
  _QWORD *v16; // r10
  char v17; // al
  unsigned __int64 *v18; // rbx
  unsigned __int64 *v19; // r12
  unsigned int v20; // ecx
  unsigned __int64 v21; // rdx
  __int64 *v22; // rsi
  __int64 v23; // rcx
  unsigned __int64 v24; // rbp
  char v25; // dl
  __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rdi
  __int16 v30; // ax
  _WORD *v31; // rax
  _QWORD *v32; // [rsp+0h] [rbp-168h]
  _QWORD *v33; // [rsp+0h] [rbp-168h]
  _QWORD *v34; // [rsp+0h] [rbp-168h]
  char v36; // [rsp+1Eh] [rbp-14Ah]
  char v37; // [rsp+1Fh] [rbp-149h]
  void *ptr; // [rsp+20h] [rbp-148h] BYREF
  __int64 v39; // [rsp+28h] [rbp-140h]
  _QWORD v40[39]; // [rsp+30h] [rbp-138h] BYREF

  v4 = 0;
  v6 = *a2;
  ptr = v40;
  v39 = 0x2000000000LL;
  v7 = *(_DWORD *)(a1 + 48);
  v8 = v7 & 0x3F;
  v9 = (__int64 *)(v6 + 8LL * (v7 >> 6));
  v10 = *v9;
  if ( !_bittest64(&v10, v8) )
  {
    v4 = 1;
    *v9 = v10 | (1LL << v8);
  }
  v40[0] = a1;
  v11 = 1;
  v12 = a4 ^ 1;
  v13 = v40;
  do
  {
    v14 = v11--;
    v15 = v12;
    v16 = (_QWORD *)v13[v14 - 1];
    LODWORD(v39) = v11;
    v17 = 0;
    v18 = (unsigned __int64 *)v16[10];
    v19 = (unsigned __int64 *)v16[11];
    if ( v19 != v18 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v24 = *v18;
          if ( *v18 )
            goto LABEL_6;
          v24 = v18[1] & 0xFFFFFFFFFFFFFFF8LL;
          if ( v24 )
            break;
LABEL_7:
          v18 += 2;
          if ( v18 == v19 )
            goto LABEL_13;
        }
        v25 = v17;
        if ( !v15 )
          break;
LABEL_11:
        if ( v25 )
          goto LABEL_6;
        v18 += 2;
        if ( v18 == v19 )
        {
LABEL_13:
          v11 = v39;
          v13 = ptr;
          goto LABEL_14;
        }
      }
      v29 = v16[4] & 0xFFFFFFFFFFFFFFF8LL;
      if ( v29 )
      {
        v30 = *(_WORD *)v29 & 0x1FF;
        if ( v30 == 131 )
          goto LABEL_28;
        if ( ((v30 + 394) & 0x1FFu) <= 1 )
        {
          v34 = v16;
          v17 = sub_9C6550((_WORD *)v29, a3, nullptr, 1u, 0);
          v16 = v34;
          v25 = v17;
          goto LABEL_27;
        }
        if ( v30 == 241 && ((*(_BYTE *)(v29 + 1) >> 1) & 7) == 1 )
        {
LABEL_28:
          v17 = 1;
          v15 = 1;
LABEL_6:
          v20 = *(_DWORD *)(v24 + 48);
          v21 = v20 & 0x3F;
          v22 = (__int64 *)(*a2 + 8LL * (v20 >> 6));
          v23 = *v22;
          if ( !_bittest64(&v23, v21) )
          {
            *v22 = v23 | (1LL << v21);
            v27 = (unsigned int)v39;
            v28 = (unsigned int)v39 + 1LL;
            if ( v28 > HIDWORD(v39) )
            {
              v37 = v17;
              v36 = v15;
              v33 = v16;
              sub_2237220(&ptr, v40, v28, 8);
              v27 = (unsigned int)v39;
              v17 = v37;
              v15 = v36;
              v16 = v33;
            }
            ++v4;
            *((_QWORD *)ptr + v27) = v24;
            LODWORD(v39) = v39 + 1;
          }
          goto LABEL_7;
        }
      }
      v32 = v16;
      v31 = (_WORD *)sub_995AF0((__int64)v16, 0);
      v17 = sub_9C6550(v31, a3, nullptr, 1u, 0);
      v16 = v32;
      v25 = v17;
LABEL_27:
      v15 = 1;
      goto LABEL_11;
    }
LABEL_14:
    ;
  }
  while ( v11 );
  if ( v13 != v40 )
    free(v13);
  return v4;
}
