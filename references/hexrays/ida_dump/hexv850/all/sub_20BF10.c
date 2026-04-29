unsigned __int64 __fastcall sub_20BF10(__int64 a1, __int64 a2)
{
  int v2; // r15d
  int v5; // ebp
  int v6; // esi
  _DWORD *v7; // rbx
  int v8; // eax
  int v9; // r12d
  __int64 v10; // rbp
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  __int64 v16; // r14
  int v17; // eax
  int v18; // edx
  int v19; // eax
  _DWORD *v20; // rdi
  __int64 v21; // rdx
  size_t v22; // r8
  __int64 v23; // rax
  __int64 v24; // rcx
  char *v25; // rsi
  char *v26; // r15
  size_t v27; // rax
  size_t v28; // r8
  int v29; // eax
  int v30; // ebx
  __int64 v31; // rax
  __int64 v32; // rbp
  int v33; // eax
  __int64 v35; // rdi
  _DWORD *v36; // rsi
  int v37; // eax
  char *v38; // rax
  int v39; // eax
  void *v40; // rdi
  size_t v41; // rdx
  __int64 v42; // rax
  __int64 v43; // [rsp+8h] [rbp-2D0h]
  size_t v44; // [rsp+8h] [rbp-2D0h]
  size_t v45; // [rsp+8h] [rbp-2D0h]
  size_t v46; // [rsp+18h] [rbp-2C0h]
  size_t v47; // [rsp+18h] [rbp-2C0h]
  char *s; // [rsp+20h] [rbp-2B8h] BYREF
  __int128 v49; // [rsp+28h] [rbp-2B0h]
  __int64 (__fastcall **v50)(); // [rsp+40h] [rbp-298h] BYREF
  int v51; // [rsp+48h] [rbp-290h]
  __int64 v52; // [rsp+50h] [rbp-288h]
  __int128 v53; // [rsp+58h] [rbp-280h]
  __int64 v54; // [rsp+68h] [rbp-270h]
  __int128 v55; // [rsp+70h] [rbp-268h]
  __int64 v56; // [rsp+80h] [rbp-258h]
  _BYTE v57[520]; // [rsp+90h] [rbp-248h] BYREF
  unsigned __int64 v58; // [rsp+298h] [rbp-40h]

  v2 = 0;
  v58 = __readfsqword(0x28u);
  *(_DWORD *)(a1 + 4) &= ~1u;
  if ( (unsigned __int8)sub_368130(a1) )
  {
    v2 = *(_QWORD *)(a1 + 464);
    if ( v2 )
    {
      v36 = (_DWORD *)sub_1386C0((_QWORD *)a1, 0);
      v37 = v36[6];
      if ( (v37 & 4) == 0 && ((v37 & 0x20000) == 0 || (unsigned int)(*v36 - 3) > 1) )
        sub_20E990(a1, v36, "this", 4);
      v2 = 1;
    }
  }
  v50 = (__int64 (__fastcall **)())&off_4B29B8;
  v51 = 2;
  v52 = 0;
  v54 = 0;
  v56 = a2;
  v53 = 0;
  v55 = 0;
  sub_2506C0(&v50, a2 + 16, 0);
  v5 = *(_QWORD *)(a1 + 464);
  if ( v2 < v5 )
  {
    do
    {
      v6 = v2++;
      v7 = (_DWORD *)sub_1386C0((_QWORD *)a1, v6);
      v8 = v7[6];
      if ( (v8 & 4) == 0 && ((v8 & 0x20000) == 0 || (unsigned int)(*v7 - 3) > 1) )
      {
        qsnprintf(v57, 512, "a%d", v2);
        sub_20E990(a1, v7, v57, 4);
      }
    }
    while ( v5 != v2 );
  }
  v9 = 0;
  v10 = *(_QWORD *)(a1 + 136);
  v11 = v10 + *(int *)(a1 + 116);
  v12 = v10 - *(_QWORD *)(a1 + 96);
  v13 = 0;
  if ( *(_QWORD *)(a1 + 440) )
  {
    while ( 1 )
    {
      v16 = *(_QWORD *)(a1 + 432) + 104 * v13;
      v17 = *(_DWORD *)(v16 + 24);
      if ( (v17 & 0x20000) == 0 || (v18 = *(_DWORD *)v16, (unsigned int)(*(_DWORD *)v16 - 3) > 1) )
      {
        if ( (v17 & 0x100) == 0 )
        {
          if ( *(_DWORD *)v16 != 1
            || (v14 = *(_QWORD *)(v16 + 8), v14 < 0)
            || v12 >= v14 + *(int *)(v16 + 88)
            || v14 >= v11 )
          {
            if ( (v17 & 4) == 0 )
            {
              qsnprintf(v57, 512, "v%d", v9);
              sub_20E990(a1, v16, v57, 4);
            }
          }
        }
        goto LABEL_18;
      }
      if ( (v17 & 4) != 0 )
        goto LABEL_18;
      v19 = *(_DWORD *)(v16 + 8);
      v20 = *(_DWORD **)(a1 + 1504);
      v49 = 0;
      s = nullptr;
      if ( v18 == 4 )
        v19 = (unsigned __int16)v19;
      sub_12ED30(v20, (__int64 *)&s, v19, *(_DWORD *)(v16 + 88));
      v24 = *((_QWORD *)&v49 + 1);
      v23 = v49;
      v25 = s;
      if ( (_QWORD)v49 )
      {
        v21 = v49 + 1;
        v22 = v49 - 1;
        if ( *((_QWORD *)&v49 + 1) >= (unsigned __int64)(v49 + 1) )
        {
          *(_QWORD *)&v49 = v49 + 1;
          s[v23] = 0;
          if ( v23 == 1 )
            goto LABEL_27;
LABEL_47:
          v25 = s;
          memmove(s + 1, s, v22);
          goto LABEL_27;
        }
      }
      else
      {
        if ( *((_QWORD *)&v49 + 1) > 1u )
        {
          *(_QWORD *)&v49 = 2;
          s[1] = 0;
          goto LABEL_27;
        }
        v22 = 0;
        v21 = 2;
      }
      v46 = v22;
      v43 = v21;
      v38 = (char *)qvector_reserve(&s, s, v21, 1);
      v22 = v46;
      v21 = v43;
      s = v38;
      v25 = v38;
      *(_QWORD *)&v49 = v43;
      v38[v46 + 1] = 0;
      if ( v46 )
        goto LABEL_47;
LABEL_27:
      *s = 95;
      qstrupr(s, v25, v21, v24, v22);
      v26 = s;
      if ( s )
      {
        v27 = strlen(s);
        v28 = v27;
        if ( v27 )
        {
          v40 = *(void **)(v16 + 32);
          v41 = v27 + 1;
          if ( *(_QWORD *)(v16 + 48) < v27 + 1 )
          {
            v47 = v27;
            v45 = v27 + 1;
            v42 = qvector_reserve(v16 + 32, v40, v41, 1);
            *(_QWORD *)(v16 + 32) = v42;
            v28 = v47;
            v40 = (void *)v42;
            v41 = v45;
          }
          *(_QWORD *)(v16 + 40) = v41;
          v44 = v28;
          memmove(v40, v26, v28);
          *(_BYTE *)(*(_QWORD *)(v16 + 32) + v44) = 0;
          v26 = s;
          *(_DWORD *)(v16 + 24) = *(_DWORD *)(v16 + 24) & 0xFFFDFFFA | 0x20004;
          if ( !v26 )
            goto LABEL_18;
        }
        else
        {
          v29 = *(_DWORD *)(v16 + 24);
          *(_QWORD *)(v16 + 40) = 0;
          *(_DWORD *)(v16 + 24) = v29 & 0xFFFDFFFA | 0x20004;
        }
        *(_QWORD *)&v49 = 0;
        qfree(v26);
      }
      else
      {
        v39 = *(_DWORD *)(v16 + 24);
        *(_QWORD *)(v16 + 40) = 0;
        *(_DWORD *)(v16 + 24) = v39 & 0xFFFDFFFA | 0x20004;
      }
LABEL_18:
      ++v9;
      v15 = *(_QWORD *)(a1 + 440);
      v13 = v9;
      if ( v9 >= v15 )
      {
        if ( v15 )
        {
          v30 = 0;
          v31 = 0;
          do
          {
            v32 = *(_QWORD *)(a1 + 432) + 104 * v31;
            v33 = *(_DWORD *)(v32 + 24);
            if ( (v33 & 1) == 0 && (v33 & 0x20100) == 0 )
            {
              v35 = *(_QWORD *)(v32 + 32);
              if ( v35 )
              {
                *(_QWORD *)(v32 + 40) = 0;
                qfree(v35);
                *(_QWORD *)(v32 + 32) = 0;
                *(_QWORD *)(v32 + 48) = 0;
              }
              if ( *(_DWORD *)(a1 + 480) == v30 )
                *(_DWORD *)(a1 + 4) &= ~0x200u;
            }
            v31 = ++v30;
          }
          while ( (unsigned __int64)v30 < *(_QWORD *)(a1 + 440) );
        }
        break;
      }
    }
  }
  *(_DWORD *)(a1 + 4) |= 3u;
  sub_20E5E0(a1);
  v50 = off_4AF6D8;
  if ( v54 )
  {
    *(_QWORD *)&v55 = 0;
    qfree(v54);
  }
  if ( v52 )
  {
    *(_QWORD *)&v53 = 0;
    qfree(v52);
  }
  return v58 - __readfsqword(0x28u);
}
