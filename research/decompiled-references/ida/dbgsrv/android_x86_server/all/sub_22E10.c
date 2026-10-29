/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_22E10
// Address: 0x00022E10

//----- (00022E10) --------------------------------------------------------
int __cdecl sub_22E10(int a1, int a2, int a3)
{
  int v3; // esi
  int *v4; // eax
  int *v5; // edi
  int v6; // eax
  __int16 v8; // cx
  unsigned int v9; // eax
  int v10; // edi
  int *v11; // ecx
  int v12; // eax
  int v13; // edi
  int *v14; // edx
  int v15; // esi
  int *v16; // eax
  int v17; // edx
  int v18; // eax
  _DWORD *v19; // ecx
  _DWORD *v20; // edx
  int v21; // ecx
  int v22; // edi
  int v23; // eax
  _DWORD *v24; // eax
  char *v25; // ecx
  char *v26; // edx
  char v27; // al
  char v28; // dl
  int v29; // eax
  int v30; // eax
  _DWORD *v31; // ecx
  int v32; // eax
  int v33; // edx
  bool v34; // al
  int v35; // eax
  int v36; // eax
  int *v37; // ecx
  int *v38; // eax
  int v39; // eax
  int v40; // ecx
  int v41; // edi
  _DWORD *v42; // edx
  int *v43; // eax
  int *v44; // ecx
  bool v45; // al
  int v46; // eax
  int v47; // ecx
  _DWORD *v48; // edi
  int v49; // [esp-8h] [ebp-E4h]
  __int16 v50; // [esp+Ch] [ebp-D0h]
  int v51; // [esp+Ch] [ebp-D0h]
  int v52; // [esp+Ch] [ebp-D0h]
  int v53; // [esp+Ch] [ebp-D0h]
  int *v54; // [esp+10h] [ebp-CCh]
  char v55; // [esp+14h] [ebp-C8h]
  char v56; // [esp+14h] [ebp-C8h]
  int v57; // [esp+18h] [ebp-C4h]
  unsigned int v58; // [esp+18h] [ebp-C4h]
  unsigned int v59; // [esp+1Ch] [ebp-C0h]
  _DWORD *v60; // [esp+20h] [ebp-BCh]
  _DWORD *v61; // [esp+20h] [ebp-BCh]
  int v62; // [esp+24h] [ebp-B8h]
  int v63; // [esp+24h] [ebp-B8h]
  int v64; // [esp+28h] [ebp-B4h]
  char v65; // [esp+2Fh] [ebp-ADh] BYREF
  int v66; // [esp+30h] [ebp-ACh] BYREF
  int v67; // [esp+34h] [ebp-A8h]
  int v68; // [esp+38h] [ebp-A4h]
  _DWORD v69[39]; // [esp+40h] [ebp-9Ch] BYREF

  v69[34] = __readgsdword(0x14u);
  v68 = a3;
  v66 = 0;
  v67 = 0;
  v65 = 0;
  v62 = 0;
  if ( !sub_22C70(a1, &v66, &v65) )
    return v62;
  v3 = v66;
  v50 = v67;
  v4 = *(int **)(a1 + 572);
  if ( v4 )
  {
    v5 = (int *)(a1 + 572);
    v54 = (int *)(a1 + 572);
    do
    {
      if ( v4[4] >= v66 )
        v5 = v4;
      v4 = (int *)v4[v4[4] < v66];
    }
    while ( v4 );
    if ( v5 != v54 && v5[4] <= v66 )
    {
      if ( v5[10] == 1 )
      {
        v8 = v67;
        v57 = v67 & 0x7F;
        if ( (v67 & 0x7F) != 0 && !*(_BYTE *)(a1 + 633) && (((_BYTE)v67 + 1) & 0x7E) == 0 )
        {
          if ( !(_BYTE)under_debugger )
            interr(30057);
          goto LABEL_160;
        }
      }
      else
      {
        v8 = v67;
        v57 = v67 & 0x7F;
      }
      *(_DWORD *)(a2 + 4) = 0;
      v5[10] = 1;
      if ( (v8 & 0xFF7F) == 0xB7F )
      {
        if ( *(_DWORD *)(a1 + 640) )
        {
          memset(v69, 0, 128);
          ptrace(PTRACE_GETSIGINFO, v3, 0, v69);
          if ( v69[2] > 0 )
          {
            v9 = ptrace(PTRACE_PEEKUSER, v3, 48, 0);
            if ( *(_DWORD *)(a1 + 640) )
            {
              if ( rangeset_t_find_range(a1 + 636, v9) )
              {
                v5[8] = 0;
                v5[10] = 0;
                ptrace(PTRACE_CONT, v3, 0, 11);
                return v62;
              }
            }
          }
        }
      }
      v10 = a1;
      sub_1E2C0(a1, 0, 1);
      *(_BYTE *)(a1 + 676) = 0;
      v11 = (int *)(a1 + 572);
      if ( v65 )
        goto LABEL_35;
      v12 = *v54;
      if ( !*v54 )
        goto LABEL_34;
      v13 = a1 + 572;
      do
      {
        if ( *(_DWORD *)(v12 + 16) >= v3 )
          v13 = v12;
        v12 = *(_DWORD *)(v12 + 4 * (*(_DWORD *)(v12 + 16) < v3));
      }
      while ( v12 );
      if ( (int *)v13 == v54 || *(_DWORD *)(v13 + 16) > v3 )
      {
LABEL_34:
        v10 = a1;
        sub_8A3F0(a1, "thread %d disappeared after freezing?!...\n", v3);
        v11 = (int *)(a1 + 572);
        goto LABEL_35;
      }
      v17 = a2;
      *(_DWORD *)a2 = *(_DWORD *)(a1 + 624);
      *(_DWORD *)(a2 + 4) = v3;
      if ( *(_BYTE *)(a1 + 633) )
      {
        *(_DWORD *)(a2 + 8) = -1;
      }
      else
      {
        if ( (((_BYTE)v50 + 1) & 0x7E) != 0 )
        {
          ptrace(PTRACE_GETSIGINFO, v3, 0, v69);
          v18 = v69[3];
        }
        else
        {
          v18 = ptrace(PTRACE_PEEKUSER, v3, 48, 0);
        }
        v17 = a2;
        *(_DWORD *)(a2 + 8) = v18;
      }
      v19 = (_DWORD *)(v13 + 20);
      *(_BYTE *)(v17 + 12) = 0;
      if ( v57 == 127 )
      {
        v60 = (_DWORD *)(v13 + 20);
        set_debug_event_code((_DWORD *)v17, 7);
        v20 = (_DWORD *)a2;
        if ( (*(_DWORD *)(a2 + 16) & 0xFFFFFFF) != 7 )
          goto LABEL_154;
        v21 = HIBYTE(v50);
        *(_DWORD *)(a2 + 20) = HIBYTE(v50);
        *(_BYTE *)(a2 + 24) = 1;
        *(_DWORD *)(a2 + 28) = -1;
        if ( HIBYTE(v50) == 19 && *(_BYTE *)(v13 + 44) )
        {
          *(_BYTE *)(v13 + 44) = 0;
          v10 = a1;
          goto LABEL_56;
        }
        v10 = a1;
        v52 = HIBYTE(v50);
        v24 = (_DWORD *)(*(int (__cdecl **)(int, int))(*(_DWORD *)a1 + 28))(a1, v21);
        v58 = (unsigned int)v24;
        if ( v24 )
        {
          v25 = byte_EF875;
          v26 = byte_EF875;
          if ( v24[3] )
            v26 = (char *)v24[2];
          if ( v24[6] )
            v25 = (char *)v24[5];
          sub_1F400(a2 + 32, "got %s signal (%s)", v26, v25);
          v10 = a1;
          v27 = (*(int (__cdecl **)(int, int, unsigned int))(*(_DWORD *)a1 + 236))(a1, a2, v58);
          v28 = 1;
          if ( !v27 )
          {
            v28 = 0;
            v29 = v52;
            if ( (*(_BYTE *)(v58 + 4) & 2) != 0 )
              v29 = 0;
            v52 = v29;
          }
        }
        else
        {
          sub_1F400(a2 + 32, "got unknown signal #%d", v52);
          v28 = 1;
        }
        v31 = (_DWORD *)a2;
        if ( (*(_DWORD *)(a2 + 16) & 0xFFFFFFF) != 7 )
        {
LABEL_154:
          if ( !(_BYTE)under_debugger )
            interr(3299);
          goto LABEL_160;
        }
        if ( *(_DWORD *)(a2 + 20) != 5 || (v32 = *(_DWORD *)(a2 + 8)) == 0 )
        {
LABEL_129:
          v43 = (int *)(a1 + 572);
          v44 = (int *)*v54;
          if ( !*v54 )
          {
LABEL_43:
            copy_debug_event(v10 + 80, (_DWORD *)a2);
            return 1;
          }
          v56 = v28;
          do
          {
            if ( v44[4] >= v3 )
              v43 = v44;
            v44 = (int *)v44[v44[4] < v3];
          }
          while ( v44 );
          v11 = (int *)(a1 + 572);
          if ( v43 != v54 && v43[4] <= v3 )
          {
            v43[8] = v52;
            if ( *(_BYTE *)(v10 + 677) )
            {
              if ( v28 )
                goto LABEL_35;
            }
            else
            {
              v45 = sub_8CE50(v10, a2, 0);
              v11 = (int *)(a1 + 572);
              if ( v45 | (unsigned __int8)v56 )
              {
                if ( v45 )
                  return v62;
                goto LABEL_35;
              }
            }
            v11 = (int *)(a1 + 572);
            if ( (*(_DWORD *)(a2 + 16) & 0xFFFFFFF) == 7 )
            {
              sub_8DCF0(v10, (_DWORD *)a2, v58);
              v20 = (_DWORD *)a2;
              if ( !*(_BYTE *)(v10 + 677) )
              {
LABEL_57:
                if ( !*(_BYTE *)(v10 + 678) )
                {
                  sub_23870(v10, 0);
                  return v62;
                }
              }
LABEL_58:
              set_debug_event_code(v20, 13);
              return 1;
            }
          }
LABEL_35:
          v14 = (int *)*v11;
          if ( *v11 )
          {
            v15 = *(_DWORD *)(a2 + 4);
            v16 = v11;
            do
            {
              if ( v14[4] >= v15 )
                v16 = v14;
              v14 = (int *)v14[v14[4] < v15];
            }
            while ( v14 );
            if ( v16 != v54 && v16[4] <= v15 )
              *((_BYTE *)v16 + 36) = 0;
          }
          goto LABEL_43;
        }
        v55 = v28;
        v33 = *(_DWORD *)(v10 + 484);
        v59 = v32 - 1;
        if ( v32 - 1 == v33 && v33 )
        {
          if ( sub_237B0(v10, v3) )
          {
            v34 = sub_21A20((_DWORD *)v10);
            v20 = (_DWORD *)a2;
            if ( v34 )
              goto LABEL_93;
            goto LABEL_56;
          }
          goto LABEL_95;
        }
        v35 = *(_DWORD *)(v10 + 468);
        if ( v59 == v35 && v35 || (v36 = *(_DWORD *)(v10 + 476), v59 == v36) && v36 )
        {
          v53 = *(_DWORD *)(v10 + 76);
          *(_DWORD *)(v10 + 628) = v3;
          sub_1D770(v10);
          if ( sub_237B0(v10, v3) )
          {
            v20 = (_DWORD *)a2;
            if ( v53 != *(_DWORD *)(v10 + 76) )
            {
LABEL_93:
              set_debug_event_code(v20, 0);
              v52 = 0;
LABEL_128:
              v28 = v55;
              goto LABEL_129;
            }
LABEL_56:
            if ( !*(_BYTE *)(v10 + 677) )
              goto LABEL_57;
            goto LABEL_58;
          }
LABEL_95:
          sub_1C900();
          return 1;
        }
        if ( *(_DWORD *)(v10 + 684) <= 1u )
        {
          sub_21A20((_DWORD *)v10);
          v37 = *(int **)(v10 + 572);
          v60 = nullptr;
          if ( !v37 )
            goto LABEL_105;
          v38 = (int *)(a1 + 572);
          do
          {
            if ( v37[4] >= v3 )
              v38 = v37;
            v37 = (int *)v37[v37[4] < v3];
          }
          while ( v37 );
          if ( v38 == v54 )
          {
LABEL_105:
            v10 = a1;
            v31 = (_DWORD *)a2;
          }
          else
          {
            v10 = a1;
            v31 = (_DWORD *)a2;
            if ( v38[4] <= v3 )
              v60 = v38 + 5;
          }
        }
        v52 = 0;
        if ( sub_22B00((_DWORD *)v10, v31) )
          goto LABEL_128;
        v39 = *(_DWORD *)(v10 + 228);
        if ( !v39 )
          goto LABEL_163;
        v40 = a1 + 228;
        do
        {
          if ( *(_DWORD *)(v39 + 16) >= v59 )
            v40 = v39;
          v39 = *(_DWORD *)(v39 + 4 * (*(_DWORD *)(v39 + 16) < v59));
        }
        while ( v39 );
        if ( v40 == a1 + 228 || v59 < *(_DWORD *)(v40 + 16) )
          goto LABEL_163;
        v64 = *(_DWORD *)(a1 + 188);
        v41 = 4 * v64;
        v42 = *(_DWORD **)(a1 + 184);
        if ( 4 * v64 )
        {
          v42 = *(_DWORD **)(a1 + 184);
          while ( v59 != *v42 )
          {
            ++v42;
            v41 -= 4;
            if ( !v41 )
              goto LABEL_145;
          }
        }
        if ( v42 != (_DWORD *)(*(_DWORD *)(a1 + 184) + 4 * v64) )
        {
LABEL_163:
          if ( v60 && *((_BYTE *)v60 + 16) )
          {
            set_debug_event_code((_DWORD *)a2, 6);
LABEL_127:
            v10 = a1;
            goto LABEL_128;
          }
          v10 = a1;
          v28 = v55;
          if ( !v58 || (*(_BYTE *)(v58 + 4) & 2) == 0 )
          {
            if ( (*(_DWORD *)(a2 + 16) & 0xFFFFFFF) == 7 )
            {
              v52 = *(_DWORD *)(a2 + 20);
              goto LABEL_127;
            }
            goto LABEL_154;
          }
          goto LABEL_129;
        }
LABEL_145:
        v46 = *(_DWORD *)(a1 + 660);
        v20 = (_DWORD *)a2;
        if ( v46 )
        {
          v47 = a1 + 660;
          do
          {
            if ( *(_DWORD *)(v46 + 16) >= v59 )
              v47 = v46;
            v46 = *(_DWORD *)(v46 + 4 * (*(_DWORD *)(v46 + 16) < v59));
          }
          while ( v46 );
          v10 = a1;
          v20 = (_DWORD *)a2;
          if ( v47 != a1 + 660 && v59 >= *(_DWORD *)(v47 + 16) )
            goto LABEL_56;
        }
        v48 = v20;
        set_debug_event_code(v20, 5);
        if ( (v48[4] & 0xFFFFFFF) == 5 )
        {
          *(_DWORD *)(a2 + 20) = -1;
          *(_DWORD *)(a2 + 24) = -1;
          *(_DWORD *)(a2 + 8) = v59;
          goto LABEL_127;
        }
        if ( !(_BYTE)under_debugger )
          interr(3298);
LABEL_160:
        BUG();
      }
      if ( (((_BYTE)v50 + 1) & 0x7E) != 0 )
      {
        v63 = *(_DWORD *)v17;
        v51 = *(_DWORD *)(v17 + 4);
        v22 = v17;
        v61 = v19;
        v23 = strsignal(v57);
        v49 = *(_DWORD *)(v22 + 8);
        v10 = a1;
        sub_8A3F0(a1, "SIGNALED pid=%d tid=%d signal='%s'(%d) pc=%a\n", v63, v51, v23, v57, v49);
        v19 = v61;
        if ( *(_DWORD *)(a1 + 576) < 2u )
          goto LABEL_73;
      }
      else
      {
        v57 = HIBYTE(v50);
        v10 = a1;
        if ( *(_DWORD *)(a1 + 576) < 2u )
          goto LABEL_73;
      }
      if ( *v19 != *(_DWORD *)(v10 + 624) )
      {
        free_debug_event((_DWORD *)a2);
        sub_1DBC0(v10, *(_DWORD *)(a2 + 4), 3);
        goto LABEL_86;
      }
LABEL_73:
      set_debug_event_code((_DWORD *)a2, 2);
      v30 = *(_DWORD *)(a2 + 16) & 0xFFFFFFF;
      if ( v30 != 2 && v30 != 4 )
      {
        if ( !(_BYTE)under_debugger )
          interr(3296);
        goto LABEL_160;
      }
      *(_DWORD *)(a2 + 20) = v57;
      *(_BYTE *)(v10 + 633) = 1;
LABEL_86:
      v11 = (int *)(a1 + 572);
      goto LABEL_35;
    }
  }
  sub_8A3F0(a1, "EVENT FOR UNKNOWN THREAD %d, IGNORED...\n", v66);
  v6 = HIBYTE(v50);
  v62 = 0;
  if ( (v50 & 0x7F) != 0x7F )
    v6 = 0;
  ptrace(PTRACE_CONT, v3, 0, v6);
  return v62;
}
// 17C30: using guessed type int __cdecl strsignal(_DWORD);
// 13E34C: using guessed type int under_debugger;
