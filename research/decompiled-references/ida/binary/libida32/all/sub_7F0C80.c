__int64 __fastcall sub_7F0C80(__int64 a1, __int64 a2, unsigned __int16 a3, int a4, int a5, int a6)
{
  _DWORD *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r12
  unsigned __int8 v12; // al
  unsigned __int8 v13; // cl
  unsigned __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rbp
  __int64 v17; // r15
  unsigned int v18; // ebx
  char v19; // r10
  __int64 v20; // rax
  _DWORD *v21; // rbx
  void *v22; // rdi
  __int64 v24; // rax
  unsigned int next_fixup_ea; // eax
  int v26; // ebx
  int v27; // edx
  int v28; // ecx
  int byte; // ebx
  int v30; // r8d
  int v31; // r9d
  const char *v32; // rdi
  int v33; // ebp
  __int64 v34; // rax
  _DWORD *v35; // rsi
  int v36; // eax
  int v37; // r9d
  char *v38; // r12
  const char *v39; // rdx
  char v40; // al
  __int64 v41; // rbp
  const char *v42; // rax
  int v43; // esi
  __int64 v44; // rcx
  char *v45; // rax
  char v46; // dl
  char v47; // [rsp-8h] [rbp-8F8h]
  char v48; // [rsp-8h] [rbp-8F8h]
  __int64 v49; // [rsp+8h] [rbp-8E8h]
  __int64 v50; // [rsp+8h] [rbp-8E8h]
  __int64 v51; // [rsp+10h] [rbp-8E0h]
  __int16 v52; // [rsp+1Eh] [rbp-8D2h]
  __int64 v53; // [rsp+20h] [rbp-8D0h]
  unsigned __int8 v54; // [rsp+38h] [rbp-8B8h]
  int v57; // [rsp+40h] [rbp-8B0h]
  void *ptr; // [rsp+48h] [rbp-8A8h] BYREF
  __int128 v59; // [rsp+50h] [rbp-8A0h]
  _QWORD v60[4]; // [rsp+68h] [rbp-888h] BYREF
  __int64 v61; // [rsp+88h] [rbp-868h] BYREF
  int v62; // [rsp+90h] [rbp-860h]
  _BYTE *v63; // [rsp+98h] [rbp-858h]
  int v64; // [rsp+A0h] [rbp-850h]
  _BYTE v65[1024]; // [rsp+A8h] [rbp-848h] BYREF
  _DWORD v66[255]; // [rsp+4A8h] [rbp-448h] BYREF
  char v67; // [rsp+8A7h] [rbp-49h] BYREF
  char v68; // [rsp+8A8h] [rbp-48h] BYREF
  unsigned __int64 v69; // [rsp+8B0h] [rbp-40h]

  v69 = __readfsqword(0x28u);
  v8 = v65;
  do
  {
    *(_QWORD *)v8 = 0;
    v8 += 8;
    *(_OWORD *)(v8 - 6) = 0;
  }
  while ( v66 != v8 );
  v9 = *(_QWORD *)a1;
  v59 = 0;
  v62 = -1;
  v61 = v9;
  v64 = 0;
  v63 = v65;
  v10 = *(_QWORD *)(a2 + 8);
  ptr = nullptr;
  v57 = v10;
  if ( (int)v10 <= 0 )
  {
    v20 = 0;
    v11 = 0;
    if ( a4 <= 3 )
      goto LABEL_24;
  }
  else
  {
    v54 = 0;
    v53 = (unsigned int)(v10 - 1);
    v49 = 0;
    v52 = 0;
    while ( 1 )
    {
      v11 = **(_QWORD **)(a2 + 24) + 104LL * *(unsigned int *)(*(_QWORD *)a2 + 4 * v49);
      v12 = v54;
      v13 = *(_BYTE *)(v11 + 66);
      v54 = v13;
      if ( v13 != v12 )
      {
        v14 = v13;
        v52 = -1;
        if ( v13 == get_bytes(v66, v13, *(_DWORD *)(a1 + 16) + (unsigned int)a3, 0, 0) )
          v52 = sub_7F00C0(v66, v14);
      }
      if ( (debug & 4) != 0 )
        sub_383DA0();
      if ( v52 == *(_WORD *)(v11 + 64) )
      {
        v15 = *(_QWORD *)(v11 + 80);
        v16 = 0;
        v51 = (unsigned int)(v15 - 1);
        if ( (int)v15 <= 0 )
        {
LABEL_38:
          if ( *(_QWORD *)(v11 + 40) <= 1u )
            goto LABEL_22;
          v26 = *(_DWORD *)(a1 + 16);
          v27 = *(_DWORD *)(v11 + 56);
          if ( (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 16LL) & 1) != 0 )
          {
            byte = (unsigned __int8)get_byte(v27 + v26 + a3 + (unsigned int)*(unsigned __int8 *)(v11 + 66));
            v32 = haystack;
            if ( *(_QWORD *)(v11 + 40) )
              v32 = *(const char **)(v11 + 32);
            qsscanf((int)v32, (int)"%x", (int)v60, v28, v30, v31, v47);
            if ( (debug & 4) != 0 )
              sub_383DA0();
            if ( byte == LODWORD(v60[0]) )
              goto LABEL_22;
          }
          else
          {
            v33 = sub_7F0A90(a1, v27 + v26, *(_QWORD *)(v11 + 32), (__int64)&v61);
            if ( (debug & 4) != 0 )
            {
              if ( !*(_QWORD *)(v11 + 40) )
                sub_383DA0();
              sub_383DA0();
            }
            if ( v33 == 2 )
              goto LABEL_22;
            v34 = v59;
            v35 = ptr;
            if ( *((_QWORD *)&v59 + 1) < (unsigned __int64)(v59 + 1) )
            {
              ptr = (void *)qvector_reserve(&ptr, ptr, v59 + 1, 4);
              v35 = ptr;
              v34 = v59;
            }
            v35[v34] = v49;
            *(_QWORD *)&v59 = v59 + 1;
          }
        }
        else
        {
          while ( 1 )
          {
            v17 = *(_QWORD *)(v11 + 72) + 8 * v16;
            v18 = *(_DWORD *)v17 + *(unsigned __int8 *)(v11 + 66) + *(_DWORD *)(a1 + 16) + a3;
            v19 = get_byte(v18);
            if ( (debug & 4) != 0 )
              sub_383DA0();
            if ( *(_BYTE *)(v17 + 4) != v19 )
              break;
            if ( (unsigned __int8)get_fixups(0, v18, 1) )
              goto LABEL_17;
            if ( (unsigned int)getinf(5) == 22
              && (next_fixup_ea = get_next_fixup_ea(v18), next_fixup_ea != -1)
              && next_fixup_ea - v18 <= 2
              && (v60[0] = 0, v60[1] = 0xFFFFFFFF00000000LL, v60[2] = 0, (unsigned __int8)get_fixup(v60, next_fixup_ea)) )
            {
              if ( LOWORD(v60[0]) == 2 )
              {
LABEL_17:
                if ( (debug & 4) != 0 )
                  sub_383DA0();
                break;
              }
              v24 = v16 + 1;
              if ( v16 == v51 )
                goto LABEL_38;
            }
            else
            {
              v24 = v16 + 1;
              if ( v16 == v51 )
                goto LABEL_38;
            }
            v16 = v24;
          }
        }
      }
      if ( v53 == v49 )
        break;
      ++v49;
    }
    v20 = v59;
    if ( a4 <= 3 )
      goto LABEL_21;
  }
  if ( v57 == v20 )
  {
    v36 = qsnprintf((int)v66, 1024, (int)"%d defined bytes match; ", a4, a5, a6, v47);
    v38 = (char *)v66 + v36;
    if ( v38 >= &v68 )
    {
      if ( !under_debugger )
        interr(520);
LABEL_81:
      BUG();
    }
    v39 = "Xref candidates: ";
    if ( v36 == 1023 )
    {
LABEL_74:
      *v38 = 0;
    }
    else
    {
      while ( 1 )
      {
        v40 = *v39++;
        *v38 = v40;
        if ( !v40 )
          break;
        if ( ++v38 == &v67 )
          goto LABEL_74;
      }
    }
    v41 = 0;
    v50 = (unsigned int)(v59 - 1);
    if ( (int)v59 > 0 )
    {
      while ( 1 )
      {
        v43 = (unsigned int)&v68 - (_DWORD)v38;
        v44 = **(_QWORD **)(a2 + 24) + 104LL * *(unsigned int *)(*(_QWORD *)a2 + 4 * v41);
        if ( v41 )
        {
          if ( v38 >= &v68 )
          {
            if ( !under_debugger )
              interr(520);
            goto LABEL_81;
          }
          v45 = ", ";
          if ( v38 == &v67 )
          {
LABEL_72:
            v67 = 0;
            v43 = 1;
            v38 = &v67;
          }
          else
          {
            while ( 1 )
            {
              v46 = *v45++;
              *v38 = v46;
              if ( !v46 )
                break;
              if ( ++v38 == &v67 )
                goto LABEL_72;
            }
            v43 = (unsigned int)&v68 - (_DWORD)v38;
          }
        }
        v42 = haystack;
        if ( *(_QWORD *)(v44 + 40) )
          v42 = *(const char **)(v44 + 32);
        v38 += (int)qsnprintf(
                      (int)v38,
                      v43,
                      (int)"%s @ 0x%a",
                      (int)v42,
                      *(_DWORD *)(v44 + 56) + *(_DWORD *)(a1 + 16),
                      v37,
                      v48);
        if ( v50 == v41 )
          break;
        ++v41;
      }
    }
    remember_problem(16, *(unsigned int *)(a1 + 16), v66);
  }
LABEL_21:
  v11 = 0;
LABEL_22:
  if ( ptr )
  {
    *(_QWORD *)&v59 = 0;
    qfree(ptr);
  }
LABEL_24:
  v21 = v66;
  do
  {
    v22 = *((void **)v21 - 4);
    v21 -= 8;
    if ( v22 )
    {
      *((_QWORD *)v21 + 1) = 0;
      qfree(v22);
    }
  }
  while ( v21 != (_DWORD *)v65 );
  return v11;
}

