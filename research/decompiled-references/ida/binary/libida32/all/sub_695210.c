__int64 __fastcall sub_695210(
        __int64 **a1,
        __int64 a2,
        double a3,
        double a4,
        double a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        int a11,
        int a12,
        void *a13,
        __int64 a14,
        int a15,
        __int64 a16)
{
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 result; // rax
  int v23; // ebx
  __int64 v24; // rbp
  unsigned int *v25; // rax
  unsigned int v26; // r13d
  unsigned int *v27; // rax
  int *v28; // r14
  int v29; // eax
  __int64 v30; // rcx
  int v31; // eax
  void *v32; // rdi
  unsigned int v33; // esi
  unsigned int *v34; // rax
  __int64 v35; // rsi
  __int64 v36; // [rsp+0h] [rbp-38h]
  int v37; // [rsp+8h] [rbp-30h]
  int v38; // [rsp+10h] [rbp-28h]
  void *v39; // [rsp+18h] [rbp-20h]
  __int64 v40; // [rsp+20h] [rbp-18h]
  int v41; // [rsp+28h] [rbp-10h]
  __int64 v42; // [rsp+30h] [rbp-8h]

  sub_5AD260(*a1, a2);
  v21 = *(unsigned int *)(a2 + 16);
  if ( (_DWORD)v21 == -1 )
    goto LABEL_2;
  if ( sub_5B05C0((__int64)*a1, a2, v21) )
    goto LABEL_2;
  sub_693D00(a1, *(_DWORD *)a2);
  if ( !*((_BYTE *)a1 + 40) )
    goto LABEL_2;
  v34 = sub_5AFCE0((__int64)*a1, *(unsigned int *)(a2 + 16));
  v21 = *(unsigned int *)(a2 + 20);
  if ( (_DWORD)v21 )
  {
    v35 = **(unsigned int **)(a2 + 24);
    *(_DWORD *)(a2 + 16) = v35;
    v34 = sub_5AFCE0((__int64)*a1, v35);
    if ( !v34 )
      goto LABEL_2;
  }
  else
  {
    *(_DWORD *)(a2 + 16) = -1;
    if ( !v34 )
    {
LABEL_20:
      if ( *((_BYTE *)a1 + 40) )
        return sub_5B96C0(*a1, a2, a3, a4, a5, v21, v18, v19, v20, a10, a11, a12, a13, a14, a15, a16);
      else
        return sub_693D00(a1, *(_DWORD *)a2);
    }
  }
  sub_694D30(a1, (__int64)v34, a3, a4, a5, v21, v18, v19, v20, v36, v37, v38, v39, v40, v41, v42);
LABEL_2:
  result = *(unsigned int *)(a2 + 20);
  v23 = *(_DWORD *)(a2 + 20) - 1;
  if ( v23 < 0 )
    goto LABEL_12;
  v24 = 4LL * v23;
  do
  {
    while ( 1 )
    {
      v26 = *(_DWORD *)(*(_QWORD *)(a2 + 24) + v24);
      v27 = sub_5AFCE0((__int64)*a1, v26);
      v28 = (int *)v27;
      if ( v27 )
      {
        v25 = sub_5AE770(*a1, (__int64)v27, *(_DWORD *)a2);
        if ( v25 )
        {
          sub_693E40(a1, v28, v25, (unsigned int *)a2);
        }
        else
        {
          v33 = *(_DWORD *)a2;
          if ( *((_BYTE *)a1 + 40) )
          {
            if ( !(unsigned __int8)sub_5B40F0(*a1, (__int64)v28, v33, *(_DWORD *)(a2 + 4), a3, a4, a5) )
            {
              if ( !under_debugger )
                interr(2430);
              BUG();
            }
          }
          else
          {
            sub_693D00(a1, v33);
          }
        }
        goto LABEL_6;
      }
      if ( !*((_BYTE *)a1 + 40) )
      {
        sub_693D00(a1, v26);
        goto LABEL_6;
      }
      v29 = *(_DWORD *)(a2 + 20);
      *(_DWORD *)(a2 + 20) = v29 - 1;
      v21 = (unsigned int)(v29 - 1 - v23);
      if ( v29 - 1 - v23 > 0 )
        break;
LABEL_6:
      --v23;
      v24 -= 4;
      if ( v23 == -1 )
        goto LABEL_11;
    }
    v30 = *(_QWORD *)(a2 + 24);
    v31 = v23-- + 1;
    v32 = (void *)(v30 + v24);
    v24 -= 4;
    memcpy(v32, (const void *)(v30 + 4LL * v31), 4LL * (int)v21);
  }
  while ( v23 != -1 );
LABEL_11:
  result = *(unsigned int *)(a2 + 20);
LABEL_12:
  if ( !(_DWORD)result )
    goto LABEL_20;
  return result;
}

