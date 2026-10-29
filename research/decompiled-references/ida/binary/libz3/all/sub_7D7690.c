__int64 __fastcall sub_7D7690(__int64 a1, unsigned int a2)
{
  char **exception; // rbp
  char **v3; // rbp
  __int64 result; // rax
  __int64 v7; // r12
  __int64 v8; // rax
  int v9; // edi
  __int64 *v10; // rcx
  unsigned int v11; // edx
  __int64 *v12; // rsi
  __int64 v13; // rdx
  __int64 *v14; // r8
  __int64 *i; // rax
  __int64 v16; // rdx
  __int64 *v17; // r12
  __int64 *v18; // r13
  char v19; // r14
  unsigned int v20; // ebp
  unsigned int v21; // r14d
  __int64 v22; // rsi
  unsigned int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rsi
  _QWORD *v26; // r14
  _QWORD *v27; // rdx
  __int64 v28; // rax
  unsigned int *v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rdx
  _QWORD *v32; // rbp
  unsigned int v33; // eax
  __int64 v34; // rcx
  int v35; // eax
  _QWORD *v36; // rcx
  __int64 v37; // rax
  unsigned int v38; // r13d
  unsigned int v39; // ecx
  unsigned int *v40; // rax
  __int64 v41; // rcx
  unsigned int v42; // r15d
  unsigned int v43; // ecx
  unsigned int *v44; // rax
  __int64 v45; // rax
  unsigned int v46; // eax
  unsigned int v47; // eax
  _QWORD *v48; // rdx
  _QWORD *v49; // rax
  int v50; // [rsp+0h] [rbp-68h]
  int v51; // [rsp+8h] [rbp-60h]
  __int64 v52[11]; // [rsp+10h] [rbp-58h] BYREF

  result = sub_7E4F60(a1, a2 >> 1);
  if ( *(_WORD *)(result + 4) != 2 )
    return result;
  v7 = result;
  result = *(unsigned int *)(result + 16);
  if ( (unsigned int)result > 1 )
    return result;
  if ( (a2 & 1) == (((unsigned __int8)result ^ 1) & 1) )
  {
    v47 = sub_7D5F10(a1, v7);
    return sub_7E5400(a1, a2 ^ 1, v47, 0);
  }
  v8 = *(unsigned int *)(a1 + 3096);
  v9 = *(_DWORD *)(v7 + 12);
  v10 = *(__int64 **)(a1 + 3088);
  v11 = v8 - 1;
  v8 *= 16;
  v12 = (__int64 *)((char *)v10 + v8);
  v13 = 16LL * (v9 & v11);
  v14 = &v10[(unsigned __int64)v13 / 8];
  if ( v13 != v8 )
  {
    for ( i = &v10[(unsigned __int64)v13 / 8]; v12 != i; i += 2 )
    {
      v16 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v16 + 12) == v9 && v7 == v16 )
        {
LABEL_19:
          v24 = i[1];
LABEL_20:
          v25 = *(_QWORD *)(v24 + 24);
          v26 = *(_QWORD **)(a1 + 80);
          if ( !*(_WORD *)(v25 + 4) && (*(_BYTE *)(v25 + 30) & 1) != 0 )
          {
            v46 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, __int64 *))(*v26 + 472LL))(
                    *(_QWORD *)(a1 + 80),
                    v25,
                    a2 & 1,
                    0,
                    v14);
            result = sub_7E5400(a1, a2 ^ 1, v46, 0);
          }
          else
          {
            v27 = *(_QWORD **)(a1 + 3112);
            if ( v27 )
            {
              v28 = *((unsigned int *)v27 - 1);
              if ( (_DWORD)v28 == *((_DWORD *)v27 - 2) )
              {
                v42 = (unsigned int)(3 * v28 + 1) >> 1;
                v43 = 4 * v42 + 8;
                if ( 4 * (int)v28 + 8 >= v43 || (unsigned int)v28 >= v42 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v52, "Overflow encountered when expanding vector");
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, v52);
                  sub_233E40((__int64)v52);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v44 = (unsigned int *)sub_186B300(v27 - 1, v43);
                v27 = v44 + 2;
                *v44 = v42;
                v45 = v44[1];
                *(_QWORD *)(a1 + 3112) = v27;
                v29 = (unsigned int *)v27 + v45;
              }
              else
              {
                v29 = (unsigned int *)v27 + v28;
              }
            }
            else
            {
              v49 = (_QWORD *)sub_186B270(0x10u);
              *v49 = 2;
              v27 = v49 + 1;
              *(_QWORD *)(a1 + 3112) = v49 + 1;
              v29 = (unsigned int *)(v49 + 1);
            }
            *v29 = a2;
            ++*((_DWORD *)v27 - 1);
            v30 = (_QWORD *)sub_180C100(v26 + 268, 16);
            v31 = (_QWORD *)v26[266];
            v32 = v30;
            *v30 = off_1C54A20;
            v30[1] = a1 + 3112;
            if ( v31 )
            {
              v33 = *((_DWORD *)v31 - 1);
              if ( v33 == *((_DWORD *)v31 - 2) )
              {
                v38 = (3 * v33 + 1) >> 1;
                v39 = 8 * v38 + 8;
                if ( 8 * v33 + 8 >= v39 || v33 >= v38 )
                {
                  v3 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v52, "Overflow encountered when expanding vector");
                  *v3 = (char *)off_1C63128;
                  sub_2333C0(v3 + 1, v52);
                  sub_233E40((__int64)v52);
                  __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v40 = (unsigned int *)sub_186B300(v31 - 1, v39);
                v41 = v40[1];
                v31 = v40 + 2;
                v26[266] = v40 + 2;
                *v40 = v38;
                LODWORD(v40) = v41;
                v36 = &v31[v41];
                v35 = (_DWORD)v40 + 1;
              }
              else
              {
                v34 = v33;
                v35 = v33 + 1;
                v36 = &v31[v34];
              }
            }
            else
            {
              v48 = (_QWORD *)sub_186B270(0x18u);
              *v48 = 2;
              v35 = 1;
              v31 = v48 + 1;
              v26[266] = v31;
              v36 = v31;
            }
            *v36 = v32;
            *((_DWORD *)v31 - 1) = v35;
            result = *(_QWORD *)(a1 + 80);
            if ( *(_BYTE *)(result + 1394) )
              result = sub_7EF3C0((int)a1 + 400, v50, v51, v52[0]);
          }
          ++*(_DWORD *)(a1 + 108);
          return result;
        }
      }
      else if ( !v16 )
      {
        goto LABEL_12;
      }
    }
  }
  for ( ; v14 != v10; v10 += 2 )
  {
    v37 = *v10;
    if ( (unsigned __int64)*v10 > 1 )
    {
      if ( *(_DWORD *)(v37 + 12) == v9 && v7 == v37 )
      {
        i = v10;
        goto LABEL_19;
      }
    }
    else if ( !v37 )
    {
      break;
    }
  }
LABEL_12:
  result = sub_7D67C0(a1, v7);
  if ( !(_BYTE)result )
  {
    v24 = sub_7D5350(a1, v7);
    goto LABEL_20;
  }
  v17 = *(__int64 **)(a1 + 3152);
  if ( v17 )
  {
    result = *((unsigned int *)v17 - 1);
    v18 = &v17[result];
    if ( v18 != v17 )
    {
      v19 = a2;
      v20 = a2 ^ 1;
      v21 = v19 & 1;
      do
      {
        v22 = *v17++;
        v23 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**(_QWORD **)(a1 + 80) + 472LL))(
                *(_QWORD *)(a1 + 80),
                v22,
                v21,
                0);
        result = sub_7E5400(a1, v20, v23, 0);
      }
      while ( v18 != v17 );
    }
  }
  return result;
}

