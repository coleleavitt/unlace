__int64 __fastcall sub_813F40(_QWORD *a1, __int64 a2, unsigned __int16 a3, int a4, int a5, int a6)
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
  unsigned int *v17; // r15
  unsigned __int64 v18; // rbx
  char v19; // r11
  __int64 v20; // rax
  _DWORD *v21; // rbx
  void *v22; // rdi
  __int64 v24; // rax
  __int64 next_fixup_ea; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rsi
  int v29; // ecx
  int byte; // ebx
  int v31; // r8d
  int v32; // r9d
  const char *v33; // rdi
  int v34; // ebp
  __int64 v35; // rax
  _DWORD *v36; // rsi
  int v37; // eax
  int v38; // r9d
  char *v39; // r12
  const char *v40; // rdx
  char v41; // al
  __int64 v42; // rbp
  const char *v43; // rax
  int v44; // esi
  __int64 v45; // rcx
  char *v46; // rax
  char v47; // dl
  __int64 v48; // [rsp+8h] [rbp-9F8h]
  __int64 v49; // [rsp+8h] [rbp-9F8h]
  __int64 v50; // [rsp+10h] [rbp-9F0h]
  __int16 v51; // [rsp+1Eh] [rbp-9E2h]
  __int64 v52; // [rsp+20h] [rbp-9E0h]
  unsigned __int8 v53; // [rsp+38h] [rbp-9C8h]
  int v56; // [rsp+40h] [rbp-9C0h]
  void *ptr; // [rsp+48h] [rbp-9B8h] BYREF
  __int128 v58; // [rsp+50h] [rbp-9B0h]
  _QWORD v59[3]; // [rsp+68h] [rbp-998h] BYREF
  int v60; // [rsp+80h] [rbp-980h]
  __int64 v61; // [rsp+88h] [rbp-978h] BYREF
  __m128i si128; // [rsp+90h] [rbp-970h]
  __int64 v63; // [rsp+A0h] [rbp-960h]
  __int64 v64; // [rsp+A8h] [rbp-958h]
  _BYTE v65[1280]; // [rsp+B8h] [rbp-948h] BYREF
  _DWORD v66[255]; // [rsp+5B8h] [rbp-448h] BYREF
  char v67; // [rsp+9B7h] [rbp-49h] BYREF
  char v68; // [rsp+9B8h] [rbp-48h] BYREF
  unsigned __int64 v69; // [rsp+9C0h] [rbp-40h]

  v69 = __readfsqword(0x28u);
  v8 = v65;
  do
  {
    *(_QWORD *)v8 = 0;
    v8 += 10;
    *((_OWORD *)v8 - 2) = 0;
  }
  while ( v66 != v8 );
  v9 = *a1;
  v58 = 0;
  v59[1] = -1;
  v59[0] = v9;
  v60 = 0;
  v59[2] = v65;
  v10 = *(_QWORD *)(a2 + 8);
  ptr = nullptr;
  v56 = v10;
  if ( (int)v10 <= 0 )
  {
    v20 = 0;
    v11 = 0;
    if ( a4 <= 3 )
      goto LABEL_24;
  }
  else
  {
    v53 = 0;
    v52 = (unsigned int)(v10 - 1);
    v48 = 0;
    v51 = 0;
    while ( 1 )
    {
      v11 = **(_QWORD **)(a2 + 24) + 104LL * *(unsigned int *)(*(_QWORD *)a2 + 4 * v48);
      v12 = v53;
      v13 = *(_BYTE *)(v11 + 66);
      v53 = v13;
      if ( v13 != v12 )
      {
        v14 = v13;
        v51 = -1;
        if ( v13 == get_bytes(v66, v13, *(_QWORD *)(*a1 + 1504LL) & (a1[2] + a3), 0, 0) )
          v51 = sub_813280(v66, v14);
      }
      if ( (debug & 4) != 0 )
        sub_3879F0();
      if ( v51 == *(_WORD *)(v11 + 64) )
      {
        v15 = *(_QWORD *)(v11 + 80);
        v16 = 0;
        v50 = (unsigned int)(v15 - 1);
        if ( (int)v15 <= 0 )
        {
LABEL_38:
          if ( *(_QWORD *)(v11 + 40) <= 1u )
            goto LABEL_22;
          v26 = a1[2];
          v27 = *(int *)(v11 + 56);
          v28 = *(_QWORD *)(*a1 + 1504LL);
          if ( (*(_BYTE *)(a1[1] + 16LL) & 1) != 0 )
          {
            byte = (unsigned __int8)get_byte(v28 & (*(unsigned __int8 *)(v11 + 66) + v27 + v26 + a3));
            v33 = haystack;
            if ( *(_QWORD *)(v11 + 40) )
              v33 = *(const char **)(v11 + 32);
            qsscanf((_DWORD)v33, (unsigned int)"%x", (unsigned int)&v61, v29, v31, v32);
            if ( (debug & 4) != 0 )
              sub_3879F0();
            if ( byte == (_DWORD)v61 )
              goto LABEL_22;
          }
          else
          {
            v34 = sub_813D30((__int64)a1, v28 & (v26 + v27), *(_QWORD *)(v11 + 32), (__int64)v59);
            if ( (debug & 4) != 0 )
              sub_3879F0();
            if ( v34 == 2 )
              goto LABEL_22;
            v35 = v58;
            v36 = ptr;
            if ( *((_QWORD *)&v58 + 1) < (unsigned __int64)(v58 + 1) )
            {
              ptr = (void *)qvector_reserve(&ptr, ptr, v58 + 1, 4);
              v36 = ptr;
              v35 = v58;
            }
            v36[v35] = v48;
            *(_QWORD *)&v58 = v58 + 1;
          }
        }
        else
        {
          while ( 1 )
          {
            v17 = (unsigned int *)(*(_QWORD *)(v11 + 72) + 8 * v16);
            v18 = *(_QWORD *)(*a1 + 1504LL) & (*v17 + *(unsigned __int8 *)(v11 + 66) + a1[2] + a3);
            v19 = get_byte(v18);
            if ( (debug & 4) != 0 )
              sub_3879F0();
            if ( *((_BYTE *)v17 + 4) != v19 )
              break;
            if ( (unsigned __int8)get_fixups(nullptr, v18, 1) )
              goto LABEL_17;
            if ( (unsigned int)getinf(5) == 22
              && (next_fixup_ea = get_next_fixup_ea(v18), next_fixup_ea != -1)
              && next_fixup_ea - v18 <= 2
              && (v61 = 0,
                  v63 = 0,
                  v64 = 0,
                  si128 = _mm_load_si128((const __m128i *)&xmmword_23A76C0),
                  (unsigned __int8)get_fixup(&v61, next_fixup_ea)) )
            {
              if ( (_WORD)v61 == 2 )
              {
LABEL_17:
                if ( (debug & 4) != 0 )
                  sub_3879F0();
                break;
              }
              v24 = v16 + 1;
              if ( v16 == v50 )
                goto LABEL_38;
            }
            else
            {
              v24 = v16 + 1;
              if ( v16 == v50 )
                goto LABEL_38;
            }
            v16 = v24;
          }
        }
      }
      if ( v52 == v48 )
        break;
      ++v48;
    }
    v20 = v58;
    if ( a4 <= 3 )
      goto LABEL_21;
  }
  if ( v56 == v20 )
  {
    v37 = qsnprintf((unsigned int)v66, 1024, (unsigned int)"%d defined bytes match; ", a4, a5, a6);
    v39 = (char *)v66 + v37;
    if ( v39 >= &v68 )
    {
      if ( !under_debugger )
        interr(520);
LABEL_79:
      BUG();
    }
    v40 = "Xref candidates: ";
    if ( v37 == 1023 )
    {
LABEL_72:
      *v39 = 0;
    }
    else
    {
      while ( 1 )
      {
        v41 = *v40++;
        *v39 = v41;
        if ( !v41 )
          break;
        if ( ++v39 == &v67 )
          goto LABEL_72;
      }
    }
    v42 = 0;
    v49 = (unsigned int)(v58 - 1);
    if ( (int)v58 > 0 )
    {
      while ( 1 )
      {
        v44 = (unsigned int)&v68 - (_DWORD)v39;
        v45 = **(_QWORD **)(a2 + 24) + 104LL * *(unsigned int *)(*(_QWORD *)a2 + 4 * v42);
        if ( v42 )
        {
          if ( v39 >= &v68 )
          {
            if ( !under_debugger )
              interr(520);
            goto LABEL_79;
          }
          v46 = ", ";
          if ( v39 == &v67 )
          {
LABEL_70:
            v67 = 0;
            v44 = 1;
            v39 = &v67;
          }
          else
          {
            while ( 1 )
            {
              v47 = *v46++;
              *v39 = v47;
              if ( !v47 )
                break;
              if ( ++v39 == &v67 )
                goto LABEL_70;
            }
            v44 = (unsigned int)&v68 - (_DWORD)v39;
          }
        }
        v43 = haystack;
        if ( *(_QWORD *)(v45 + 40) )
          v43 = *(const char **)(v45 + 32);
        v39 += (int)qsnprintf(
                      (_DWORD)v39,
                      v44,
                      (unsigned int)"%s @ 0x%a",
                      (_DWORD)v43,
                      *(_DWORD *)(*a1 + 1504LL) & (unsigned int)(*((_DWORD *)a1 + 4) + *(_DWORD *)(v45 + 56)),
                      v38);
        if ( v49 == v42 )
          break;
        ++v42;
      }
    }
    remember_problem(16, a1[2], v66);
  }
LABEL_21:
  v11 = 0;
LABEL_22:
  if ( ptr )
  {
    *(_QWORD *)&v58 = 0;
    qfree(ptr);
  }
LABEL_24:
  v21 = v66;
  do
  {
    v22 = *((void **)v21 - 5);
    v21 -= 10;
    if ( v22 )
    {
      *((_QWORD *)v21 + 1) = 0;
      qfree(v22);
    }
  }
  while ( v21 != (_DWORD *)v65 );
  return v11;
}
