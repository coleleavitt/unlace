char __fastcall sub_1756C20(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int16 v6; // r13
  __int16 v7; // r12
  unsigned __int16 v8; // bp
  __int64 v10; // rcx
  char result; // al
  unsigned int v12; // esi
  __int64 *v13; // r15
  __int64 v14; // rdi
  int v15; // r14d
  unsigned int v16; // r9d
  _WORD *v17; // rax
  __int16 v18; // r8
  __int64 v19; // rdx
  unsigned int v20; // r9d
  unsigned __int16 *v21; // rax
  unsigned __int16 v22; // r8
  __int64 v23; // rsi
  __int64 v24; // r13
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  unsigned __int16 *v28; // r9
  __int64 *v29; // rax
  int v30; // r10d
  unsigned __int16 *v31; // r11
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // r9
  __int64 v35; // r8
  unsigned __int16 v36; // si
  int v37; // r10d
  _WORD *v38; // r11
  int v39; // edi
  __int64 v40; // r8
  __int64 v41; // r9
  __int16 v42; // r8
  __int64 v43; // r10
  unsigned int v44; // r9d
  int v45; // r14d
  _WORD *v46; // r11
  int v47; // eax
  int v48; // r8d
  __int64 v49; // r9
  unsigned int v50; // edi
  int v51; // r11d
  unsigned __int16 *v52; // r10
  int v53; // eax
  int v54; // edi
  __int64 v55; // r8
  unsigned int v56; // r14d
  int v57; // r10d
  unsigned __int16 *v58; // r9
  __int64 v59; // r9
  unsigned int v60; // r14d
  int v61; // r11d
  _WORD *v62; // r10
  unsigned __int16 v63; // [rsp+0h] [rbp-50h]
  __int64 v64; // [rsp+0h] [rbp-50h]
  __int64 v65; // [rsp+0h] [rbp-50h]
  __int16 v66; // [rsp+0h] [rbp-50h]
  unsigned __int16 v67; // [rsp+14h] [rbp-3Ch] BYREF
  unsigned __int16 v68[29]; // [rsp+16h] [rbp-3Ah] BYREF

  if ( ((BYTE2(a2) ^ BYTE2(a3)) & 1) != 0 )
    return 0;
  v6 = a3;
  v7 = a2;
  v8 = a2;
  v10 = HIWORD(a2) & 1;
  if ( (_DWORD)v10 )
  {
    v68[0] = a3;
    v24 = *(_QWORD *)sub_1743A80(a1 + 72, v68, a3, v10, a5, (unsigned __int16 *)a6);
    v67 = a2;
    v29 = (__int64 *)sub_1743A80(a1 + 72, &v67, v25, v26, v27, v28);
    return sub_17567F0(a1, *v29, v24);
  }
  result = (_WORD)a2 == (unsigned __int16)a3;
  if ( *(_QWORD *)(a1 + 8) )
  {
    v12 = *(_DWORD *)(a1 + 88);
    v13 = (__int64 *)(a1 + 72);
    if ( !v12 )
      goto LABEL_27;
    v14 = *(_QWORD *)(a1 + 72);
    v15 = 37 * (unsigned __int16)a3;
    v10 = v12 - 1;
    v16 = v10 & v15;
    v17 = (_WORD *)(v14 + 16LL * ((unsigned int)v10 & v15));
    v18 = *v17;
    if ( (_WORD)a3 == *v17 )
    {
LABEL_6:
      v19 = *((_QWORD *)v17 + 1);
      goto LABEL_7;
    }
    v37 = 1;
    v38 = nullptr;
    if ( v18 != -1 )
    {
      while ( 1 )
      {
        if ( !v38 && v18 == -2 )
          v38 = v17;
        v16 = v10 & (v37 + v16);
        v17 = (_WORD *)(v14 + 16LL * v16);
        v18 = *v17;
        if ( (_WORD)a3 == *v17 )
          goto LABEL_6;
        if ( v18 == -1 )
          break;
        ++v37;
      }
      if ( v38 )
        v17 = v38;
    }
    a5 = 3 * v12;
    v39 = *(_DWORD *)(a1 + 80) + 1;
    a6 = (unsigned int)(4 * v39);
    if ( (unsigned int)a6 < (unsigned int)a5 )
    {
      v40 = v12 - *(_DWORD *)(a1 + 84) - v39;
      v41 = v12 >> 3;
      if ( (unsigned int)v40 > (unsigned int)v41 )
      {
        v42 = *v17;
        goto LABEL_24;
      }
      v66 = a3;
      sub_17494F0(v13, v12, a3, v10, v40, v41);
      v12 = *(_DWORD *)(a1 + 88);
      if ( v12 )
      {
        LODWORD(v10) = v12 - 1;
        v59 = *(_QWORD *)(a1 + 72);
        v60 = (v12 - 1) & v15;
        v39 = *(_DWORD *)(a1 + 80) + 1;
        LOWORD(a3) = v66;
        v17 = (_WORD *)(v59 + 16LL * v60);
        v42 = *v17;
        if ( v66 != *v17 )
        {
          v61 = 1;
          v62 = nullptr;
          if ( v42 != -1 )
          {
            while ( 1 )
            {
              if ( v42 == -2 && !v62 )
                v62 = v17;
              v60 = v10 & (v61 + v60);
              v17 = (_WORD *)(v59 + 16LL * v60);
              v42 = *v17;
              if ( v6 == *v17 )
                goto LABEL_24;
              if ( v42 == -1 )
              {
                if ( !v62 )
                  break;
                v42 = *v62;
                v17 = v62;
                goto LABEL_24;
              }
              ++v61;
            }
          }
LABEL_30:
          *(_DWORD *)(a1 + 80) = v39;
LABEL_26:
          *v17 = a3;
          v19 = 0;
          *((_QWORD *)v17 + 1) = 0;
          v14 = *(_QWORD *)(a1 + 72);
LABEL_7:
          v20 = v10 & (37 * v8);
          v21 = (unsigned __int16 *)(v14 + 16LL * v20);
          v22 = *v21;
          if ( v8 == *v21 )
          {
LABEL_8:
            v23 = *((_QWORD *)v21 + 1);
            return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a1 + 8))(*(_QWORD *)(a1 + 16), v23, v19);
          }
          v30 = 1;
          v31 = nullptr;
          if ( v22 != 0xFFFF )
          {
            while ( 1 )
            {
              if ( v22 == 0xFFFE && !v31 )
                v31 = v21;
              v20 = v10 & (v30 + v20);
              v21 = (unsigned __int16 *)(v14 + 16LL * v20);
              v22 = *v21;
              if ( v7 == *v21 )
                goto LABEL_8;
              if ( v22 == 0xFFFF )
                break;
              ++v30;
            }
            if ( v31 )
              v21 = v31;
          }
          v32 = 3 * v12;
          v33 = (unsigned int)(*(_DWORD *)(a1 + 80) + 1);
          v34 = (unsigned int)(4 * v33);
          if ( (unsigned int)v34 >= (unsigned int)v32 )
          {
            v64 = v19;
            sub_17494F0(v13, 2 * v12, v19, v33, v32, v34);
            v47 = *(_DWORD *)(a1 + 88);
            if ( v47 )
            {
              v48 = v47 - 1;
              v49 = *(_QWORD *)(a1 + 72);
              v50 = (v47 - 1) & (37 * v8);
              LODWORD(v33) = *(_DWORD *)(a1 + 80) + 1;
              v19 = v64;
              v21 = (unsigned __int16 *)(v49 + 16LL * v50);
              v36 = *v21;
              if ( v8 != *v21 )
              {
                v51 = 1;
                v52 = nullptr;
                if ( v36 != 0xFFFF )
                {
                  while ( 1 )
                  {
                    if ( !v52 && v36 == 0xFFFE )
                      v52 = v21;
                    v50 = v48 & (v51 + v50);
                    v21 = (unsigned __int16 *)(v49 + 16LL * v50);
                    v36 = *v21;
                    if ( v7 == *v21 )
                      goto LABEL_17;
                    if ( v36 == 0xFFFF )
                    {
                      if ( !v52 )
                        goto LABEL_34;
                      v36 = *v52;
                      v21 = v52;
                      goto LABEL_17;
                    }
                    ++v51;
                  }
                }
                goto LABEL_34;
              }
LABEL_17:
              *(_DWORD *)(a1 + 80) = v33;
              if ( v36 != 0xFFFF )
                --*(_DWORD *)(a1 + 84);
              goto LABEL_19;
            }
          }
          else
          {
            v35 = v12 - ((_DWORD)v33 + *(_DWORD *)(a1 + 84));
            if ( (unsigned int)v35 > v12 >> 3 )
            {
              v36 = *v21;
              goto LABEL_17;
            }
            v65 = v19;
            sub_17494F0(v13, v12, v19, v33, v35, v34);
            v53 = *(_DWORD *)(a1 + 88);
            if ( v53 )
            {
              v54 = v53 - 1;
              v55 = *(_QWORD *)(a1 + 72);
              v56 = (v53 - 1) & (37 * v8);
              LODWORD(v33) = *(_DWORD *)(a1 + 80) + 1;
              v19 = v65;
              v21 = (unsigned __int16 *)(v55 + 16LL * v56);
              v36 = *v21;
              if ( v8 != *v21 )
              {
                v57 = 1;
                v58 = nullptr;
                if ( v36 != 0xFFFF )
                {
                  while ( 1 )
                  {
                    if ( v36 == 0xFFFE && !v58 )
                      v58 = v21;
                    v56 = v54 & (v57 + v56);
                    v21 = (unsigned __int16 *)(v55 + 16LL * v56);
                    v36 = *v21;
                    if ( v7 == *v21 )
                      goto LABEL_17;
                    if ( v36 == 0xFFFF )
                    {
                      if ( !v58 )
                        break;
                      v36 = *v58;
                      v21 = v58;
                      goto LABEL_17;
                    }
                    ++v57;
                  }
                }
LABEL_34:
                *(_DWORD *)(a1 + 80) = v33;
LABEL_19:
                *v21 = v8;
                v23 = 0;
                *((_QWORD *)v21 + 1) = 0;
                return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a1 + 8))(*(_QWORD *)(a1 + 16), v23, v19);
              }
              goto LABEL_17;
            }
          }
          ++*(_DWORD *)(a1 + 80);
          BUG();
        }
        goto LABEL_24;
      }
    }
    else
    {
LABEL_27:
      v63 = a3;
      sub_17494F0(v13, 2 * v12, a3, v10, a5, a6);
      v12 = *(_DWORD *)(a1 + 88);
      if ( v12 )
      {
        LOWORD(a3) = v63;
        LODWORD(v10) = v12 - 1;
        v43 = *(_QWORD *)(a1 + 72);
        v44 = (v12 - 1) & (37 * v63);
        v39 = *(_DWORD *)(a1 + 80) + 1;
        v17 = (_WORD *)(v43 + 16LL * v44);
        v42 = *v17;
        if ( v63 != *v17 )
        {
          v45 = 1;
          v46 = nullptr;
          if ( v42 != -1 )
          {
            while ( 1 )
            {
              if ( !v46 && v42 == -2 )
                v46 = v17;
              v44 = v10 & (v45 + v44);
              v17 = (_WORD *)(v43 + 16LL * v44);
              v42 = *v17;
              if ( v6 == *v17 )
                goto LABEL_24;
              if ( v42 == -1 )
              {
                if ( !v46 )
                  goto LABEL_30;
                v42 = *v46;
                v17 = v46;
                goto LABEL_24;
              }
              ++v45;
            }
          }
          goto LABEL_30;
        }
LABEL_24:
        *(_DWORD *)(a1 + 80) = v39;
        if ( v42 != -1 )
          --*(_DWORD *)(a1 + 84);
        goto LABEL_26;
      }
    }
    ++*(_DWORD *)(a1 + 80);
    BUG();
  }
  return result;
}
