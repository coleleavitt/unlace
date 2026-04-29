__int64 __fastcall sub_1AA610(__int64 a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rbp
  unsigned int v4; // r12d
  __int64 v5; // rax
  int v6; // edx
  int v7; // ecx
  __int64 v8; // rax
  unsigned __int8 v9; // dl
  int v10; // eax
  unsigned int v11; // eax
  __int64 v12; // rbx
  __int64 v13; // r13
  __int64 v14; // rbp
  int v15; // eax
  __int64 v16; // rbx
  __int64 v17; // r13
  __int64 v18; // rbp
  int v19; // eax
  int v20; // r13d
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rcx
  int v24; // edi
  __int64 v25; // rdx
  int v26; // eax
  __int64 v28; // [rsp+0h] [rbp-A8h] BYREF
  __int128 v29; // [rsp+8h] [rbp-A0h]
  __int64 v30; // [rsp+18h] [rbp-90h]
  __int64 v31; // [rsp+20h] [rbp-88h]
  int v32; // [rsp+28h] [rbp-80h]
  __int64 v33; // [rsp+2Ch] [rbp-7Ch]
  __int64 v34; // [rsp+38h] [rbp-70h]
  __int128 v35; // [rsp+40h] [rbp-68h]
  __int64 v36; // [rsp+50h] [rbp-58h]
  __int64 v37; // [rsp+58h] [rbp-50h]
  int v38; // [rsp+60h] [rbp-48h]
  __int64 v39; // [rsp+64h] [rbp-44h]
  unsigned __int64 v40; // [rsp+78h] [rbp-30h]

  v40 = __readfsqword(0x28u);
  v2 = *(_QWORD **)(a1 + 16);
  v3 = v2[35];
  v4 = *(unsigned __int8 *)(v3 + 320);
  if ( !(_BYTE)v4 && *(_BYTE *)(*(_QWORD *)(v3 + 1496) + 148LL) )
    return v4;
  v5 = (*(__int64 (__fastcall **)(_QWORD *))(*v2 + 24LL))(v2);
  v28 = 0;
  v6 = *(char *)(v5 + 13);
  v7 = *(char *)(v5 + 12);
  v29 = 0;
  v8 = *(_QWORD *)(a1 + 16);
  v35 = 0;
  v38 = v6;
  v9 = *(_BYTE *)(a1 + 468);
  v32 = v7;
  v30 = v8 + 96;
  v31 = 0;
  v33 = 0xFFFFFFFFLL;
  v34 = 0;
  v36 = v8 + 120;
  v37 = 0;
  v39 = 0xFFFFFFFFLL;
  if ( v9 || *(_DWORD *)(a1 + 88) == -1 )
  {
    v20 = *(_DWORD *)(v3 + 72);
    sub_19D620(&v28, *(_QWORD *)(v8 + 280));
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(*(_QWORD *)(a1 + 16));
    v21 = v36;
    v22 = (int)v33;
    *(_BYTE *)(a1 + 468) = 1;
    v23 = (int)v39;
    v24 = v35;
    v25 = *(_QWORD *)(v21 + 8);
    if ( v22 == -1 )
    {
      v26 = *(_DWORD *)(a1 + 88);
    }
    else
    {
      v26 = *(_QWORD *)(v30 + 8) - v29;
      *(_QWORD *)(a1 + 80) = v22;
      *(_DWORD *)(a1 + 88) = v26;
    }
    if ( v23 != -1 )
    {
      *(_QWORD *)(a1 + 104) = v23;
      *(_DWORD *)(a1 + 112) = v25 - v24;
    }
    if ( v26 == -1
      || (v10 = *(_DWORD *)(v3 + 72), v9 = (v20 & 0xFFFFFFF0) != 208 && (v20 & 0xFFFFFFF0) != 64, v10 == 128) )
    {
LABEL_27:
      if ( v34 )
      {
        *(_QWORD *)&v35 = 0;
        qfree(v34);
      }
      goto LABEL_29;
    }
LABEL_6:
    v11 = v10 & 0xFFFFFFF0;
    if ( v11 == 64 || v11 == 208 || !*(_BYTE *)(v3 + 320) && (*(_BYTE *)(v3 + 4) & 0x20) == 0 )
    {
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 16) + 40LL))(
        *(_QWORD *)(a1 + 16),
        a1 + 64,
        v9);
      if ( (unsigned int)sub_1A9240(a1, &v28) )
      {
        if ( (int)v29 > 0 )
        {
          v12 = 0;
          v13 = 8LL * (unsigned int)(v29 - 1) + 8;
          do
          {
            v14 = v31;
            sub_11D5A0(*(_QWORD *)(v28 + v12));
            v15 = *(_DWORD *)(v14 + 24);
            v12 += 8;
            BYTE1(v15) &= ~2u;
            LOBYTE(v15) = v15 | 0x80;
            *(_DWORD *)(v14 + 24) = v15;
          }
          while ( v13 != v12 );
        }
        if ( v28 )
        {
          *(_QWORD *)&v29 = 0;
          qfree(v28);
          v28 = 0;
          *((_QWORD *)&v29 + 1) = 0;
        }
        if ( (int)v35 > 0 )
        {
          v16 = 0;
          v17 = 8LL * (unsigned int)(v35 - 1) + 8;
          do
          {
            v18 = v37;
            sub_11D5A0(*(_QWORD *)(v34 + v16));
            v19 = *(_DWORD *)(v18 + 24);
            v16 += 8;
            BYTE1(v19) &= ~2u;
            LOBYTE(v19) = v19 | 0x80;
            *(_DWORD *)(v18 + 24) = v19;
          }
          while ( v16 != v17 );
        }
        if ( v34 )
        {
          *(_QWORD *)&v35 = 0;
          qfree(v34);
        }
        v4 = 1;
        goto LABEL_30;
      }
    }
    goto LABEL_27;
  }
  v10 = *(_DWORD *)(v3 + 72);
  if ( v10 != 128 )
    goto LABEL_6;
LABEL_29:
  v4 = 0;
LABEL_30:
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree(v28);
  }
  return v4;
}
