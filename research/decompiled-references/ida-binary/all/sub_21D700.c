__int64 __fastcall sub_21D700(__int64 *a1, int a2, double a3)
{
  bool v3; // zf
  __int64 v5; // rdx
  __int64 v6; // rbp
  const void *v7; // r14
  __int64 *v8; // r15
  size_t v9; // rax
  size_t v10; // r12
  int v11; // eax
  __int64 v12; // r14
  __int64 v13; // rdx
  signed int v14; // ecx
  __int64 v15; // rax
  const char *v16; // r8
  unsigned int v18; // edx
  __int64 v19; // rcx
  int i; // eax
  void *v21; // rdi
  size_t v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  size_t v25; // [rsp+8h] [rbp-450h]
  _BYTE v26[1032]; // [rsp+10h] [rbp-448h] BYREF
  unsigned __int64 v27; // [rsp+418h] [rbp-40h]

  v3 = *a1 == 0;
  v27 = __readfsqword(0x28u);
  if ( !v3 )
    goto LABEL_2;
  if ( (unsigned __int64)a1[6] <= 1 )
    return 1;
  v23 = fopenA(a1[5]);
  *a1 = v23;
  if ( v23 )
  {
LABEL_2:
    v5 = 16 * ((qword_8CBB18 == 0) + ((qword_8CBB18 - qword_8CBAF8) >> 3) - 1)
       + ((qword_8CBAF0 - qword_8CBAE0) >> 5)
       + ((qword_8CBB00 - qword_8CBB08) >> 5);
    if ( a2 < 0 )
    {
      if ( !(_DWORD)v5 )
        goto LABEL_4;
      v18 = 0;
    }
    else
    {
      if ( !a2 )
      {
LABEL_4:
        v6 = 0;
        if ( *((int *)a1 + 2) <= 0 )
        {
LABEL_15:
          sub_199CF0(*a1, (__int64)"\n", v5);
          return 1;
        }
        do
        {
          v5 = a1[2];
          v7 = *(&off_85F200 + v6);
          v8 = (__int64 *)(v5 + 24 * v6);
          if ( v7 && (v9 = strlen((const char *)*(&off_85F200 + v6)), (v10 = v9) != 0) )
          {
            v21 = (void *)*v8;
            v22 = v9 + 1;
            if ( v8[2] < v9 + 1 )
            {
              v25 = v9 + 1;
              v24 = qvector_reserve(v8, *v8, v22, 1);
              v22 = v25;
              *v8 = v24;
              v21 = (void *)v24;
            }
            v8[1] = v22;
            memmove(v21, v7, v10);
            *(_BYTE *)(*v8 + v10) = 0;
          }
          else
          {
            v8[1] = 0;
          }
          v11 = *((_DWORD *)a1 + 2);
          ++v6;
        }
        while ( v11 > (int)v6 );
LABEL_9:
        if ( v11 > 0 )
        {
          v12 = 0;
          while ( 1 )
          {
            v13 = a1[2] + 24 * v12;
            v14 = *(_DWORD *)&asc_5E13F0[4 * v12] & 0xFFF8FFFF;
            v15 = *(_QWORD *)(v13 + 8);
            if ( v15 )
            {
              v16 = *(const char **)v13;
              if ( v15 - 1 >= (unsigned __int64)v14 )
                goto LABEL_23;
            }
            else
            {
              v16 = &s1;
              if ( !v14 )
              {
LABEL_23:
                qsnprintf(v26, 1024, "%s\t", v16);
                goto LABEL_14;
              }
            }
            qsnprintf(v26, 1024, "%-*s\t", v14, v16);
LABEL_14:
            ++v12;
            qfputs(v26, *a1);
            if ( *((_DWORD *)a1 + 2) <= (int)v12 )
              goto LABEL_15;
          }
        }
        goto LABEL_15;
      }
      if ( (int)v5 < a2 )
        return 0;
      v18 = v5 - a2;
    }
    v19 = 0;
    for ( i = 0; *((_DWORD *)a1 + 2) > i; v19 += 24 )
    {
      ++i;
      *(_QWORD *)(a1[2] + v19 + 8) = 0;
    }
    sub_21D3A0((__int64)qword_8CBAA0, (__int64 **)a1 + 2, v18, a3);
    v11 = *((_DWORD *)a1 + 2);
    goto LABEL_9;
  }
  return 0;
}
