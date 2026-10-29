__int64 __fastcall sub_183F1A0(__int64 a1, __int64 a2, __int64 (__fastcall *a3)(__int64), __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rbp
  int v6; // eax
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  _BYTE *v13; // rsi
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  char *v17; // rbx
  char *v18; // rax
  __int64 v19; // r15
  __int64 v20; // r14
  __int64 v21; // rbp
  __int64 *v22; // r14
  __int64 v23; // r13
  unsigned __int8 v24; // al
  __int64 *v25; // rcx
  __int64 v26; // rdi
  __int64 *v27; // rdx
  __int64 *v28; // rax
  __int64 *v29; // rdx
  __int64 *v30; // rdx
  __int64 v31; // rdi
  __int64 *v32; // rcx
  __int64 *v33; // rax
  __int64 *v34; // rcx
  __int64 v35; // rax
  unsigned int v36; // r12d
  __int64 v37; // r13
  __int64 v38; // rax
  unsigned int v39; // r12d
  __int64 v40; // r13
  char *v41; // [rsp+0h] [rbp-A8h]
  unsigned int v42; // [rsp+Ch] [rbp-9Ch]
  unsigned __int64 v46; // [rsp+30h] [rbp-78h]
  __int64 v47; // [rsp+38h] [rbp-70h] BYREF
  void *ptr; // [rsp+40h] [rbp-68h] BYREF
  __int64 v49; // [rsp+48h] [rbp-60h]
  _BYTE v50[88]; // [rsp+50h] [rbp-58h] BYREF

  v47 = a2;
  v42 = 0;
  if ( !a2 )
    return v42;
  sub_1CB44B0(a1, &v47);
  v4 = v47;
  ptr = v50;
  v49 = 0x400000000LL;
  v46 = 0;
  if ( sub_B8E0B0(v47) )
    v46 = sub_B8D340(v4);
  v5 = v47;
  v6 = *(_BYTE *)(v47 + 28) & 0x7F;
  if ( (unsigned int)(v6 - 34) > 0x11 )
  {
    if ( (unsigned int)(v6 - 58) <= 4 )
    {
      v15 = *(_QWORD *)(v47 + 120);
      if ( (v15 & 4) != 0 && *(_DWORD *)((v15 & 0xFFFFFFFFFFFFFFF8LL) + 16) )
      {
        v38 = (unsigned int)v49;
        v39 = 0;
        do
        {
          v40 = *(_QWORD *)(*(_QWORD *)((v15 & 0xFFFFFFFFFFFFFFF8LL) + 24) + 8LL * v39);
          if ( v38 + 1 > (unsigned __int64)HIDWORD(v49) )
          {
            sub_2237220(&ptr, v50, v38 + 1, 8);
            v38 = (unsigned int)v49;
          }
          ++v39;
          *((_QWORD *)ptr + v38) = v40;
          v15 = *(_QWORD *)(v5 + 120);
          v38 = (unsigned int)(v49 + 1);
          LODWORD(v49) = v49 + 1;
        }
        while ( (v15 & 4) != 0 && v39 < *(_DWORD *)((v15 & 0xFFFFFFFFFFFFFFF8LL) + 16) );
        v6 = *(_BYTE *)(v5 + 28) & 0x7F;
      }
      if ( (unsigned int)(v6 - 59) <= 2 )
      {
        v16 = sub_B97230(v5);
        if ( v16 )
          goto LABEL_21;
        if ( (*(_BYTE *)(v47 + 28) & 0x7F) == 0x3D )
          sub_183F150((__int64)&ptr, *(_QWORD *)(v47 + 184));
      }
    }
LABEL_24:
    v12 = (unsigned int)v49;
    goto LABEL_25;
  }
  v7 = *(_QWORD *)(v47 + 56);
  if ( (v7 & 4) == 0 || !*(_DWORD *)((v7 & 0xFFFFFFFFFFFFFFF8LL) + 16) )
  {
    if ( (unsigned int)(v6 - 34) > 5 )
      goto LABEL_74;
LABEL_7:
    v8 = sub_B77A30(v5);
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 56);
      v10 = (unsigned int)v49;
      v11 = (unsigned int)v49 + 1LL;
      if ( v11 > HIDWORD(v49) )
      {
        sub_2237220(&ptr, v50, v11, 8);
        v10 = (unsigned int)v49;
      }
      *((_QWORD *)ptr + v10) = v9;
      v12 = (unsigned int)(v49 + 1);
      LODWORD(v49) = v49 + 1;
      goto LABEL_25;
    }
    goto LABEL_24;
  }
  v35 = (unsigned int)v49;
  v36 = 0;
  do
  {
    v37 = *(_QWORD *)(*(_QWORD *)((v7 & 0xFFFFFFFFFFFFFFF8LL) + 24) + 8LL * v36);
    if ( v35 + 1 > (unsigned __int64)HIDWORD(v49) )
    {
      sub_2237220(&ptr, v50, v35 + 1, 8);
      v35 = (unsigned int)v49;
    }
    ++v36;
    *((_QWORD *)ptr + v35) = v37;
    v7 = *(_QWORD *)(v5 + 56);
    v35 = (unsigned int)(v49 + 1);
    LODWORD(v49) = v49 + 1;
  }
  while ( (v7 & 4) != 0 && v36 < *(_DWORD *)((v7 & 0xFFFFFFFFFFFFFFF8LL) + 16) );
  v5 = v47;
  v6 = *(_BYTE *)(v47 + 28) & 0x7F;
  if ( (unsigned int)(v6 - 34) <= 5 )
    goto LABEL_7;
LABEL_74:
  if ( (unsigned int)(v6 - 40) > 6 )
    goto LABEL_24;
  v46 = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v5 + 16) & 4) != 0 )
    v46 = *(_QWORD *)(*(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  v16 = sub_B73BE0(v5);
  if ( !v16 )
  {
    if ( (*(_BYTE *)(v47 + 28) & 0x7F) == 0x2A )
    {
      sub_183F150((__int64)&ptr, *(_QWORD *)(v47 + 144));
      v12 = (unsigned int)v49;
      goto LABEL_25;
    }
    goto LABEL_24;
  }
LABEL_21:
  sub_183F150((__int64)&ptr, *(_QWORD *)(v16 + 56));
  v12 = (unsigned int)v49;
LABEL_25:
  v17 = (char *)ptr;
  v18 = (char *)ptr + 8 * v12;
  v41 = v18;
  if ( ptr == v18 )
  {
    v42 = 0;
    v13 = v18;
  }
  else
  {
    v19 = 0;
    v42 = 0;
    do
    {
      v20 = *(_QWORD *)v17;
      if ( (*(_DWORD *)(*(_QWORD *)v17 + 20LL) & 0x1FFFFFFF) != 0 )
      {
        v19 = a3(a4);
        v21 = v20 + 8LL * (*(_DWORD *)(v20 + 20) & 0x1FFFFFFF) + 24;
        v22 = (__int64 *)(v20 + 24);
        if ( (__int64 *)v21 != v22 )
        {
          while ( 1 )
          {
            v23 = *v22;
            if ( *(_QWORD *)(*v22 + 40) )
              break;
LABEL_62:
            if ( (__int64 *)v21 == ++v22 )
              goto LABEL_63;
          }
          v24 = *(_BYTE *)(v23 + 28) & 0x7F;
          if ( (unsigned int)v24 - 40 <= 6 && v24 != 43 )
          {
            if ( *(_BYTE *)(v19 + 452) )
            {
              v25 = *(__int64 **)(v19 + 432);
              v26 = *(unsigned int *)(v19 + 444);
              v27 = &v25[v26];
              if ( v25 != v27 )
              {
                v28 = *(__int64 **)(v19 + 432);
                if ( v23 == *v25 )
                {
LABEL_41:
                  v29 = &v25[*(unsigned int *)(v19 + 444)];
                  goto LABEL_42;
                }
                while ( v27 != ++v28 )
                {
                  if ( v23 == *v28 )
                    goto LABEL_41;
                }
              }
              if ( (unsigned int)v26 < *(_DWORD *)(v19 + 440) )
              {
                *(_DWORD *)(v19 + 444) = v26 + 1;
                *v27 = v23;
                v25 = *(__int64 **)(v19 + 432);
                v28 = &v25[v26];
                goto LABEL_41;
              }
            }
            v28 = (__int64 *)sub_2236760(v19 + 432, *v22);
            v25 = *(__int64 **)(v19 + 432);
            if ( *(_BYTE *)(v19 + 452) )
              goto LABEL_41;
            v29 = &v25[*(unsigned int *)(v19 + 440)];
LABEL_42:
            if ( v29 != v28 && (unsigned __int64)(*v28 + 2) <= 1 )
            {
              do
                ++v28;
              while ( v29 != v28 && (unsigned __int64)*v28 >= 0xFFFFFFFFFFFFFFFELL );
            }
          }
          if ( *(_BYTE *)(v19 + 100) )
          {
            v30 = *(__int64 **)(v19 + 80);
            v31 = *(unsigned int *)(v19 + 92);
            v32 = &v30[v31];
            if ( v30 != v32 )
            {
              v33 = *(__int64 **)(v19 + 80);
              if ( v23 == *v30 )
              {
LABEL_55:
                v34 = &v30[*(unsigned int *)(v19 + 92)];
                goto LABEL_56;
              }
              while ( v32 != ++v33 )
              {
                if ( v23 == *v33 )
                  goto LABEL_55;
              }
            }
            if ( (unsigned int)v31 < *(_DWORD *)(v19 + 88) )
            {
              *(_DWORD *)(v19 + 92) = v31 + 1;
              *v32 = v23;
              v30 = *(__int64 **)(v19 + 80);
              v33 = &v30[v31];
              goto LABEL_55;
            }
          }
          v33 = (__int64 *)sub_2236760(v19 + 80, v23);
          v30 = *(__int64 **)(v19 + 80);
          if ( *(_BYTE *)(v19 + 100) )
            goto LABEL_55;
          v34 = &v30[*(unsigned int *)(v19 + 88)];
LABEL_56:
          if ( v34 != v33 && (unsigned __int64)(*v33 + 2) <= 1 )
          {
            do
              ++v33;
            while ( v34 != v33 && (unsigned __int64)*v33 >= 0xFFFFFFFFFFFFFFFELL );
          }
          sub_15C17C0(a1 + 2608, v23);
          goto LABEL_62;
        }
LABEL_63:
        ++v42;
      }
      v17 += 8;
    }
    while ( v41 != v17 );
    if ( v19 )
      sub_17A2EE0(a1, (char *)v19, v46);
    v13 = ptr;
  }
  if ( v13 != v50 )
    free(v13);
  return v42;
}
