unsigned __int64 __fastcall sub_13890(__int64 a1, __int64 a2, char a3, char a4, __int64 *a5)
{
  unsigned int v5; // r15d
  unsigned __int64 v7; // rbp
  __int64 v9; // rax
  unsigned __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // rdi
  __int64 v20; // r12
  int v21; // ebx
  bool v22; // cf
  unsigned int v23; // ebx
  unsigned __int64 v24; // r10
  unsigned __int8 v25; // al
  __int64 v26; // rdi
  unsigned __int8 v28; // r9
  unsigned int v29; // ecx
  __int64 v30; // rdi
  unsigned __int16 v31; // ax
  __int64 v32; // rdi
  __int64 v33; // rdi
  unsigned __int64 v34; // rsi
  __int64 v35; // rcx
  char v36; // [rsp-28h] [rbp-8D8h]
  __int64 *v37; // [rsp-18h] [rbp-8C8h]
  __int64 v38; // [rsp-10h] [rbp-8C0h]
  __int64 v39; // [rsp-8h] [rbp-8B8h]
  int *v40; // [rsp+0h] [rbp-8B0h]
  __int64 *v41; // [rsp+8h] [rbp-8A8h]
  __int128 *v42; // [rsp+10h] [rbp-8A0h]
  __int64 v44; // [rsp+20h] [rbp-890h]
  unsigned __int64 v45; // [rsp+20h] [rbp-890h]
  int v46; // [rsp+34h] [rbp-87Ch] BYREF
  __int128 v47; // [rsp+38h] [rbp-878h] BYREF
  __m128i v48; // [rsp+48h] [rbp-868h] BYREF
  int v49; // [rsp+68h] [rbp-848h] BYREF
  char v50; // [rsp+6Ch] [rbp-844h]
  char v51; // [rsp+6Dh] [rbp-843h]
  char v52; // [rsp+6Eh] [rbp-842h]
  char v53; // [rsp+6Fh] [rbp-841h]
  _BYTE v54[14]; // [rsp+468h] [rbp-448h] BYREF
  char v55; // [rsp+476h] [rbp-43Ah]
  unsigned __int64 v56; // [rsp+870h] [rbp-40h]

  v5 = 0;
  v7 = 0;
  v41 = a5;
  v56 = __readfsqword(0x28u);
  v9 = *(_QWORD *)(a1 + 40);
  *(_BYTE *)(a1 + 382) = a3;
  v10 = *(_QWORD *)(v9 + 64);
  v47 = 0;
  LOBYTE(v47) = 6;
  v42 = &v47;
  set_compiler(&v47, 2, 0);
  v15 = (int *)((unsigned __int8)getinf(38, 2, v11, v12, v13, v14) | 4u);
  setinf(38);
  v54[0] = 0;
  *(_BYTE *)(a1 + 56) = a4;
  if ( v10 )
  {
    while ( 1 )
    {
      if ( (unsigned __int8)callui(27, v15, v16, &callui, v17, v18, v39, v40, v41, v42) )
        return v56 - __readfsqword(0x28u);
      v46 = 0;
      show_auto(v7, 0);
      v19 = *(_QWORD **)(a1 + 40);
      v20 = v19[7] + 24 * v7;
      v21 = *(unsigned __int8 *)(v20 + 23);
      v22 = __CFADD__(v5, v21);
      v23 = v5 + v21;
      if ( v23 >= v10 || v22 )
      {
        sub_5A70((__int64)"Corrupt COFF symbol table: too many aux records for COFF symbol #%d.\n", v5);
        return v56 - __readfsqword(0x28u);
      }
      v40 = &v49;
      sub_91E0(v19, v5, &v49, 1024);
      v15 = (int *)v20;
      v24 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, v20);
      v25 = *(_BYTE *)(v20 + 22);
      if ( v25 > 0x6Fu )
        goto LABEL_10;
      if ( v25 <= 0x63u )
      {
        if ( v25 == 6 )
        {
          if ( *(_DWORD *)(a2 + 4) == 13
            && v49 == 1146045220
            && v50 == 69
            && (v51 & 0xFD) == 0x31
            && (v52 & 0xFB) == 0x32
            && !v53 )
          {
            goto LABEL_10;
          }
          v33 = *(_QWORD *)(a1 + 32);
          v34 = v7;
          v45 = v24;
          v7 = v23 + 1;
          *(_QWORD *)&v47 = v24 + 1;
          v5 = v23 + 1;
          netnode_supset(v33, v34, v42, 8, 65);
          v15 = &v49;
          set_name(v45, &v49, 23552);
          if ( v7 >= v10 )
            return v56 - __readfsqword(0x28u);
        }
        else if ( v25 > 6u )
        {
          if ( v25 == 10 )
            goto LABEL_18;
LABEL_10:
          v7 = v23 + 1;
          v5 = v23 + 1;
          if ( v7 >= v10 )
            return v56 - __readfsqword(0x28u);
        }
        else if ( v25 == 2 )
        {
          v37 = v41;
          v36 = 1;
LABEL_16:
          v28 = 0;
LABEL_13:
          v15 = (int *)v5;
          v7 = v23 + 1;
          sub_13670((__int64 *)a1, v5, (const char *)&v49, v24, v5, v28, v36, &v46, v37);
          v5 = v23 + 1;
          if ( v7 >= v10 )
            return v56 - __readfsqword(0x28u);
        }
        else
        {
          if ( v25 != 3 )
            goto LABEL_10;
          v30 = *(_QWORD *)(a1 + 32);
          v44 = v24;
          *(_QWORD *)&v47 = v24 + 1;
          netnode_supset(v30, v7, v42, 8, 65);
          v31 = *(_WORD *)(v20 + 20);
          if ( ((v31 >> 4) & 3) == 2 )
          {
            v15 = (int *)v5;
            v7 = v23 + 1;
            v5 = v23 + 1;
            sub_11B90(a1, (unsigned int)v15, (const char *)&v49, v44, &v46, 0, v41);
            v16 = v38;
            if ( v7 >= v10 )
              return v56 - __readfsqword(0x28u);
          }
          else if ( (*(_WORD *)(v20 + 20) & 0x10) != 0 )
          {
            v35 = 37888;
            if ( _bittest64(&v35, v31 & 0xF) || (~(_BYTE)v31 & 0x30) == 0 )
            {
LABEL_18:
              v26 = *(_QWORD *)(a1 + 40);
              v15 = (int *)v5;
LABEL_9:
              sub_9170(v26, (unsigned int)v15, &v48, &v46);
              goto LABEL_10;
            }
            v15 = &v49;
            v7 = v23 + 1;
            v5 = v23 + 1;
            set_name(v44, &v49, 23552);
            if ( v7 >= v10 )
              return v56 - __readfsqword(0x28u);
          }
          else
          {
            sub_13310(a1, v5, (const char *)&v49, v44, &v46);
            v32 = *(_QWORD *)(a1 + 32);
            v15 = (int *)v7;
            v7 = v23 + 1;
            *(_QWORD *)&v47 = 1;
            netnode_supset(v32, v15, v42, 8, 115);
            v5 = v23 + 1;
            if ( v7 >= v10 )
              return v56 - __readfsqword(0x28u);
          }
        }
      }
      else
      {
        switch ( v25 )
        {
          case 'd':
          case 'e':
            v26 = *(_QWORD *)(a1 + 40);
            v15 = (int *)v5;
            goto LABEL_9;
          case 'f':
            goto LABEL_18;
          case 'g':
            v15 = (int *)v5;
            if ( (unsigned __int8)sub_9170(*(_QWORD *)(a1 + 40), v5, &v48, &v46) )
            {
              if ( v48.m128i_i32[0] )
              {
                v7 = v23 + 1;
                v55 = 0;
                v5 = v23 + 1;
                *(_QWORD *)v54 = v48.m128i_i64[0];
                *(_QWORD *)&v54[6] = *(__int64 *)((char *)v48.m128i_i64 + 6);
                if ( v7 >= v10 )
                  return v56 - __readfsqword(0x28u);
              }
              else
              {
                v29 = v48.m128i_u32[1];
                if ( *(_BYTE *)(a1 + 382) )
                  v29 = _byteswap_ulong(v48.m128i_u32[1]);
                v7 = v23 + 1;
                v15 = (int *)v54;
                v5 = v23 + 1;
                sub_9030(*(_QWORD **)(a1 + 40), v54, 1024, v29, 0);
                if ( v7 >= v10 )
                  return v56 - __readfsqword(0x28u);
              }
            }
            else
            {
              v15 = (int *)v5;
              v7 = v23 + 1;
              v5 = v23 + 1;
              sub_91E0(*(_QWORD **)(a1 + 40), (unsigned int)v15, v54, 1024);
              if ( v7 >= v10 )
                return v56 - __readfsqword(0x28u);
            }
            break;
          case 'h':
          case 'k':
            v37 = v41;
            v36 = 0;
            goto LABEL_16;
          case 'i':
          case 'o':
            v28 = 1;
            v37 = v41;
            v36 = 1;
            goto LABEL_13;
          default:
            goto LABEL_10;
        }
      }
    }
  }
  return v56 - __readfsqword(0x28u);
}

