/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_34640
// Address: 0x00034640

//----- (00034640) --------------------------------------------------------
int __cdecl sub_34640(int a1)
{
  int v1; // edi
  unsigned int v2; // eax
  unsigned int v3; // ecx
  unsigned int v4; // edx
  unsigned int v5; // edx
  unsigned int v6; // edi
  unsigned int v7; // kr00_4
  int v8; // eax
  int v9; // edx
  unsigned int v10; // ecx
  unsigned int v11; // esi
  bool v12; // zf
  char *v13; // eax
  int v14; // edi
  int v16; // ecx
  int v17; // esi
  unsigned int v18; // edi
  unsigned __int64 v19; // rax
  bool v20; // cf
  unsigned __int64 v21; // rax
  int v22; // eax
  int v23; // edx
  char *v24; // eax
  _DWORD *v25; // edi
  int v26; // esi
  int i; // ebx
  int v28; // eax
  int v29; // ecx
  int v30; // eax
  int v31; // ebx
  int v32; // edx
  int v33; // ecx
  int v34; // ecx
  unsigned int v35; // eax
  int v36; // ecx
  int v37; // eax
  int v38; // edi
  int v39; // esi
  int v40; // eax
  unsigned int v41; // eax
  _DWORD *v42; // edx
  int v43; // eax
  int v44; // eax
  int v45; // [esp+Ch] [ebp-80h]
  int *v46; // [esp+10h] [ebp-7Ch]
  __int64 *v47; // [esp+10h] [ebp-7Ch]
  int v48; // [esp+14h] [ebp-78h]
  int v49; // [esp+14h] [ebp-78h]
  int v50; // [esp+14h] [ebp-78h]
  unsigned int v51; // [esp+1Ch] [ebp-70h]
  __int64 *v52; // [esp+20h] [ebp-6Ch]
  int v53; // [esp+24h] [ebp-68h]
  _QWORD v54[9]; // [esp+30h] [ebp-5Ch] BYREF
  unsigned int v55; // [esp+78h] [ebp-14h]

  v55 = __readgsdword(0x14u);
  if ( !*(_QWORD *)(a1 + 424) )
    return 0;
  v1 = qlseek(*(_DWORD *)(a1 + 360), 0, 1);
  v2 = *(_DWORD *)(a1 + 368);
  v3 = *(_DWORD *)(a1 + 364);
  v7 = v1 - v3;
  v5 = (__PAIR64__(v4, v1) - __PAIR64__(v2, v3)) >> 32;
  v6 = v1 - v3;
  v51 = v5;
  v8 = qlseek(*(_DWORD *)(a1 + 360), *(_QWORD *)(a1 + 424) + __PAIR64__(v2, v3), 0);
  if ( (v9 & v8) != 0xFFFFFFFF )
  {
    v10 = *(_DWORD *)(a1 + 60);
    v11 = *(_DWORD *)(a1 + 448);
    v46 = (int *)(a1 + 56);
    v12 = v10 == v11;
    if ( v10 >= v11 )
    {
      v16 = a1;
      if ( !v12 )
      {
        memset(v54, 0, 64);
        sub_41740(v46, v11, (char *)v54);
        v16 = a1;
      }
    }
    else
    {
      if ( *(_DWORD *)(a1 + 64) >= v11 )
      {
        v13 = (char *)*v46;
        v14 = a1;
      }
      else
      {
        v13 = (char *)qvector_reserve((int)v46, (void *)*v46, v11, 0x40u);
        v14 = a1;
        *(_DWORD *)(a1 + 56) = v13;
        v10 = *(_DWORD *)(a1 + 60);
      }
      memset(&v13[64 * v10], 0, (v11 - v10) << 6);
      *(_DWORD *)(v14 + 60) = v11;
      v16 = v14;
    }
    *(_BYTE *)(v16 + 176) = 1;
    if ( *(_DWORD *)(v16 + 448) )
    {
      v17 = 0;
      v18 = 0;
      while ( 1 )
      {
        v19 = v18 * (unsigned __int64)*(unsigned __int16 *)(v16 + 442);
        v20 = __CFADD__(*(_QWORD *)(v16 + 424), v19);
        v21 = *(_QWORD *)(v16 + 424) + v19;
        if ( v20 )
          break;
        v22 = qlseek(*(_DWORD *)(v16 + 360), *(_QWORD *)(v16 + 364) + v21, 0);
        if ( (v23 & v22) == 0xFFFFFFFF )
          goto LABEL_70;
        if ( !*(_BYTE *)(a1 + 176) )
        {
          if ( !*((_BYTE *)&qword_13ACD8 + 13940) )
            interr(20099);
LABEL_92:
          BUG();
        }
        v24 = nullptr;
        if ( *(_DWORD *)(a1 + 60) > v18 )
          v24 = (char *)(v17 + *v46);
        if ( !sub_34230(a1, v24) )
        {
LABEL_70:
          v48 = 0;
          v16 = a1;
          goto LABEL_80;
        }
        ++v18;
        v17 += 64;
        v16 = a1;
        if ( v18 >= *(_DWORD *)(a1 + 448) )
          goto LABEL_21;
      }
      v48 = 0;
LABEL_80:
      v6 = v7;
      goto LABEL_81;
    }
LABEL_21:
    v49 = *(_DWORD *)(v16 + 56);
    v53 = *(_DWORD *)(v16 + 60) << 6;
    if ( v53 )
    {
      v52 = (__int64 *)(a1 + 260);
      v25 = (_DWORD *)(v49 + 40);
      v26 = 0;
      for ( i = *(_DWORD *)(v16 + 60) << 6; i; i -= 64 )
      {
        if ( !v26 || !*((_QWORD *)v25 - 1) )
          goto LABEL_44;
        v28 = *(v25 - 9);
        switch ( v28 )
        {
          case 11:
            *(_DWORD *)(a1 + 92) = v26;
            if ( !*(_BYTE *)(a1 + 176) )
            {
              if ( !*((_BYTE *)&qword_13ACD8 + 13940) )
                interr(20099);
              goto LABEL_92;
            }
            if ( *(_DWORD *)(a1 + 60) <= *v25 || (v34 = *v46 + (*v25 << 6)) == 0 )
            {
LABEL_43:
              sub_1C900();
              break;
            }
            sub_350C0(a1, v52, v34, 1);
            break;
          case 6:
            v45 = i;
            if ( !*(_BYTE *)(a1 + 176) )
            {
              if ( !*((_BYTE *)&qword_13ACD8 + 13940) )
                interr(20099);
              goto LABEL_92;
            }
            v30 = *v25;
            if ( *(_DWORD *)(a1 + 60) > *v25 && (v31 = *v46, v32 = v30 << 6, (v33 = (v30 << 6) + *v46) != 0) )
            {
              if ( *(_DWORD *)(v31 + v32 + 4) == 11 )
                *(_DWORD *)(v31 + v32 + 40) = 0;
              else
                sub_350C0(a1, v52, v33, 1);
              i = v45;
            }
            else
            {
              sub_1C900();
              i = v45;
            }
            break;
          case 2:
            *(_DWORD *)(a1 + 124) = v26;
            if ( !*(_BYTE *)(a1 + 176) )
            {
              if ( !*((_BYTE *)&qword_13ACD8 + 13940) )
                interr(20099);
              goto LABEL_92;
            }
            if ( *(_DWORD *)(a1 + 60) <= *v25 )
              goto LABEL_43;
            v29 = *v46 + (*v25 << 6);
            if ( !v29 )
              goto LABEL_43;
            sub_350C0(a1, (__int64 *)(a1 + 228), v29, 1);
            break;
        }
LABEL_44:
        ++v26;
        v25 += 16;
      }
    }
    v35 = *(_DWORD *)(a1 + 452);
    if ( v35 )
    {
      if ( !*(_BYTE *)(a1 + 176) )
      {
        if ( !*((_BYTE *)&qword_13ACD8 + 13940) )
          interr(20099);
        goto LABEL_92;
      }
      if ( *(_DWORD *)(a1 + 60) > v35 )
      {
        v36 = *v46;
        v37 = v35 << 6;
        if ( v37 + *v46 )
        {
          *(_QWORD *)(a1 + 180) = *(_QWORD *)(v36 + v37 + 24);
          *(_QWORD *)(a1 + 188) = *(_QWORD *)(v36 + v37 + 16);
          *(_QWORD *)(a1 + 196) = *(_QWORD *)(v36 + v37 + 32);
        }
      }
    }
    memset(v54, 0, 12);
    v38 = *v46;
    v50 = v53 + v49;
    if ( *v46 == v50 )
    {
      v16 = a1;
      v42 = (_DWORD *)(a1 + 100);
    }
    else
    {
      v47 = (__int64 *)(a1 + 180);
      v39 = 0;
      do
      {
        if ( v39 && *(_QWORD *)(v38 + 32) )
        {
          HIDWORD(v54[0]) = 0;
          if ( *v47 >= 1 && *(_QWORD *)(a1 + 196) )
            sub_3C8A0(*(int **)(a1 + 172), (void **)v54, v47, *(_DWORD *)v38);
          v40 = *(_DWORD *)(v38 + 4);
          if ( v40 > 1879048188 )
          {
            switch ( v40 )
            {
              case 1879048189:
                *(_DWORD *)(a1 + 148) = v39;
                break;
              case 1879048190:
                *(_DWORD *)(a1 + 152) = v39;
                break;
              case 1879048191:
                *(_DWORD *)(a1 + 156) = v39;
                break;
            }
          }
          else
          {
            v41 = v40 - 1;
            if ( v41 <= 0x11 )
              __asm { jmp     eax }
          }
        }
        v38 += 64;
        ++v39;
      }
      while ( v50 != v38 );
      v16 = a1;
      v42 = (_DWORD *)(a1 + 100);
    }
    v43 = *(_DWORD *)(v16 + 96);
    v6 = v7;
    if ( *(_DWORD *)(v16 + 100) )
    {
      if ( v43 )
      {
LABEL_76:
        v44 = v54[0];
        if ( LODWORD(v54[0]) )
        {
          HIDWORD(v54[0]) = 0;
          qfree((void *)v54[0]);
          LODWORD(v54[0]) = 0;
          LODWORD(v54[1]) = 0;
          v16 = a1;
        }
        LOBYTE(v44) = 1;
        v48 = v44;
        goto LABEL_81;
      }
      v43 = 0;
    }
    *v42 = v43;
    goto LABEL_76;
  }
  v48 = 0;
  v16 = a1;
LABEL_81:
  qlseek(*(_DWORD *)(v16 + 360), *(_QWORD *)(v16 + 364) + __PAIR64__(v51, v6), 0);
  return v48;
}
// 346A0: variable 'v4' is possibly undefined
// 346C8: variable 'v9' is possibly undefined
// 347DD: variable 'v23' is possibly undefined
// 34EB8: variable 'v44' is possibly undefined
// 13ACD8: using guessed type __int64 qword_13ACD8;
