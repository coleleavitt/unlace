__int64 __fastcall sub_22BF80(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r12
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // rcx
  _BYTE *v6; // rax
  char v7; // al
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r14
  __int64 *v11; // rdx
  __int64 v12; // r15
  __int64 *v13; // rbp
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rdx
  _DWORD *v18; // rcx
  _DWORD *v19; // rbx
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // r10
  __int64 v24; // r13
  __int64 v25; // rbx
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rdi
  unsigned __int64 v29; // r10
  __int64 v30; // r11
  int v31; // edx
  int v32; // r14d
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rax
  _DWORD *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rax
  unsigned __int64 v43; // rsi
  unsigned __int64 v44; // rax
  __int64 v45; // rdi
  char v46; // al
  char v47; // al
  __int64 v48; // [rsp+8h] [rbp-70h]
  __int64 v49; // [rsp+8h] [rbp-70h]
  __int64 v50; // [rsp+8h] [rbp-70h]
  __int64 v51; // [rsp+10h] [rbp-68h]
  __int64 v52; // [rsp+10h] [rbp-68h]
  _DWORD *v53; // [rsp+10h] [rbp-68h]
  __int64 v54; // [rsp+10h] [rbp-68h]
  __int64 v55; // [rsp+10h] [rbp-68h]
  __int64 v56; // [rsp+10h] [rbp-68h]
  __int64 v57; // [rsp+18h] [rbp-60h]
  __int64 v58; // [rsp+18h] [rbp-60h]
  __int64 v59; // [rsp+18h] [rbp-60h]
  __int64 v60; // [rsp+18h] [rbp-60h]
  __int64 v61; // [rsp+18h] [rbp-60h]
  __int64 v62; // [rsp+18h] [rbp-60h]
  __int64 v63; // [rsp+20h] [rbp-58h]
  __int64 v64; // [rsp+20h] [rbp-58h]
  __int64 v65; // [rsp+20h] [rbp-58h]
  __int64 v66; // [rsp+20h] [rbp-58h]
  unsigned int v67; // [rsp+2Ch] [rbp-4Ch]
  _QWORD v68[9]; // [rsp+30h] [rbp-48h] BYREF

  v1 = *(_QWORD *)(a1 + 280);
  v68[1] = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 272);
  v3 = v2 + 40 * v1;
  if ( v3 != v2 )
  {
    v67 = 0;
    v4 = a1;
    while ( 1 )
    {
      v5 = *(_QWORD *)(v2 + 16);
      if ( (unsigned int)(*(_DWORD *)v5 - 12) > 1
        || *(_BYTE *)(v5 + 32) != 10
        || (v6 = *(_BYTE **)(v5 + 40), *v6 != 5)
        || v6 != *(_BYTE **)(v2 + 24) )
      {
LABEL_5:
        if ( !under_debugger )
          sub_37EEE0(52361);
        goto LABEL_81;
      }
      v63 = v4;
      v57 = v3;
      v51 = *(_QWORD *)(v2 + 16);
      v7 = sub_11C340((char *)(v5 + 48), v68, 0);
      v9 = v51;
      v3 = v57;
      v4 = v63;
      if ( !v7 )
      {
        v14 = *(_QWORD *)(v2 + 8);
        v58 = v63;
        v52 = v3;
        if ( v9 == v14 )
          goto LABEL_5;
        v15 = v9;
        v64 = v9;
        v16 = sub_AC9E0(v14, v9, v8, v9, v4, v3);
        v18 = (_DWORD *)v64;
        v19 = (_DWORD *)v16;
        if ( !v16 )
          sub_2231E0(v14, v15, v17, v64, v58, v52);
        if ( *(_BYTE *)(v16 + 32) != 4 )
          goto LABEL_5;
        if ( v64 != *(_QWORD *)(v16 + 40) )
          goto LABEL_5;
        if ( (unsigned int)(*(_DWORD *)v16 - 12) > 1 )
          goto LABEL_5;
        v65 = v58;
        v59 = v52;
        v53 = v18;
        if ( !(unsigned __int8)sub_11C340((char *)(v16 + 48), v68, 0) )
          goto LABEL_5;
        v3 = v59;
        v4 = v65;
        if ( *v53 == 13 )
        {
          if ( *v19 == 12 )
            goto LABEL_5;
          v9 = (__int64)v19;
LABEL_11:
          v10 = -v68[0];
          goto LABEL_12;
        }
        v9 = (__int64)v19;
      }
      v10 = v68[0];
      if ( *(_DWORD *)v9 != 12 )
        goto LABEL_11;
LABEL_12:
      v11 = **(__int64 ***)(v4 + 64);
      if ( !v11 )
        goto LABEL_15;
      v12 = 24;
      v13 = (__int64 *)(*v11 & 0xFFFFFFFFFFFFFFFCLL);
      if ( v13 )
      {
        if ( (*(_BYTE *)(*v11 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
          goto LABEL_15;
        v43 = *(_QWORD *)(v2 + 24);
        v44 = v13[3];
        v12 = (__int64)(v13 + 3);
        if ( v43 < v44 )
        {
LABEL_59:
          v13 = (__int64 *)v13[1];
          goto LABEL_60;
        }
        while ( v44 < v43 )
        {
          v13 = (__int64 *)v13[2];
LABEL_60:
          if ( (*(_BYTE *)v13 & 2) != 0 )
            goto LABEL_15;
          v44 = v13[3];
          v12 = (__int64)(v13 + 3);
          if ( v43 < v44 )
            goto LABEL_59;
        }
        if ( v13 == v11 )
        {
LABEL_15:
          if ( !under_debugger )
            sub_37EEE0(52362);
          goto LABEL_81;
        }
      }
      v20 = *(_QWORD *)(v12 + 8);
      v21 = *(int *)(v12 + 24);
      if ( *(_QWORD *)(v20 + 440) < v21 )
      {
        if ( !under_debugger )
          sub_37EEE0(51258);
        goto LABEL_81;
      }
      v22 = *(_QWORD *)(v12 + 16) + v10;
      v23 = *(_QWORD *)(v20 + 432) + 104 * v21;
      if ( *(_DWORD *)v23 == 1 )
        v24 = *(_QWORD *)(v23 + 8);
      else
        v24 = -1;
      v25 = v22 + v24;
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 48) + 24LL) + 24LL) != 8 )
        v25 = (int)v25;
      if ( v25 < 0 )
        goto LABEL_56;
      if ( v22 < 0 )
        v24 = 0;
      v26 = *(_QWORD *)(v2 + 16);
      if ( *(_BYTE *)(v26 + 48) == 4
        && (v45 = *(_QWORD *)(v26 + 56), *(_DWORD *)v45 == 14)
        && (v66 = v4,
            v60 = v3,
            v54 = v23,
            v48 = v9,
            v46 = sub_11C340((char *)(v45 + 32), v68, 1u),
            v9 = v48,
            v23 = v54,
            v3 = v60,
            v4 = v66,
            v46) )
      {
        v27 = v68[0];
      }
      else
      {
        v27 = 1;
      }
      if ( v22 <= *(int *)(v23 + 88) && v22 >= -v27 )
        goto LABEL_56;
      v28 = *(_QWORD *)(v4 + 8);
      if ( v25 < *(_QWORD *)(v28 + 128) )
      {
        v55 = v4;
        v49 = v3;
        v61 = v9;
        v47 = sub_312EC0(
                v28 + 848,
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v28 + 1496) + 24LL) + 16LL) & (v25 + *(_QWORD *)(v28 + 1440)));
        v3 = v49;
        v4 = v55;
        if ( !v47 )
          goto LABEL_56;
        v28 = *(_QWORD *)(v55 + 8);
        v9 = v61;
      }
      v29 = *(_QWORD *)(v28 + 440);
      if ( !v29 )
        goto LABEL_56;
      v30 = *(_QWORD *)(v28 + 432);
      v31 = 0;
      v32 = -1;
      v33 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          v34 = 3 * v33;
          v35 = v30 + 104 * v33;
          if ( *(_DWORD *)v35 == 1 )
          {
            v36 = *(_QWORD *)(v35 + 8);
            LOBYTE(v28) = v36 != -1;
            LOBYTE(v34) = v25 >= v36;
            if ( ((v25 >= v36) & (unsigned __int8)v28) != 0 && v36 >= v24 )
              break;
          }
          v33 = ++v31;
          if ( v31 >= v29 )
            goto LABEL_47;
        }
        v32 = v31;
        if ( v25 == v36 )
          break;
        ++v31;
        v24 = v36;
        v33 = v31;
        if ( v31 >= v29 )
        {
LABEL_47:
          if ( v32 != -1 )
            goto LABEL_48;
          goto LABEL_56;
        }
      }
      v24 = v25;
LABEL_48:
      if ( *(_DWORD *)(v12 + 24) != v32 )
      {
        v37 = (_DWORD *)(v30 + 104LL * v32);
        if ( *v37 == 1 )
        {
          v38 = (int)v37[22];
          if ( v38 && v25 >= (unsigned __int64)v24 && v38 + v24 - 1 >= (unsigned __int64)v25 )
          {
            *(_DWORD *)(v12 + 24) = v32;
            *(_QWORD *)(v12 + 16) = v25 - v24;
          }
          else
          {
            v28 = *(_QWORD *)(v4 + 64);
            v34 = (__int64)v13;
            v62 = v3;
            v56 = v9;
            v50 = v4;
            sub_1FA710((unsigned __int64 **)v28, v13);
            v4 = v50;
            v9 = v56;
            v3 = v62;
          }
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 24) + 8LL) + 8LL) = v25;
          *(_OWORD *)(*(_QWORD *)(v9 + 56) + 16LL) = 0;
          **(_DWORD **)(v4 + 8) &= ~0x10000u;
          v39 = *(_QWORD *)(v4 + 8);
          v40 = *(unsigned int *)(v2 + 32);
          if ( (unsigned int)v40 >= *(_DWORD *)(v39 + 64) )
            sub_2231C0(v28, v34, v39, v9, v4, v3);
          ++v67;
          v41 = *(_QWORD *)(*(_QWORD *)(v39 + 528) + 8 * v40);
          *(_DWORD *)(v41 + 24) |= 0x80u;
          goto LABEL_56;
        }
        if ( !under_debugger )
          sub_37EEE0(52587);
LABEL_81:
        BUG();
      }
LABEL_56:
      v2 += 40;
      if ( v3 == v2 )
        return v67;
    }
  }
  return 0;
}
