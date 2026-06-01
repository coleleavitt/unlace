unsigned __int64 __fastcall sub_3ABA20(__int64 a1)
{
  _QWORD *v3; // rbp
  char v4; // al
  __int64 v5; // rax
  int v6; // edx
  unsigned int v7; // ebp
  unsigned int v8; // esi
  char *v9; // rdi
  unsigned __int64 v10; // r13
  _QWORD *v11; // r13
  unsigned int *v12; // r12
  __int64 v13; // r8
  unsigned int *v14; // rbp
  char *v15; // rcx
  __int64 i; // r9
  unsigned int *v17; // rax
  unsigned int v18; // esi
  unsigned int v19; // eax
  __int64 v20; // rax
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v22; // [rsp+8h] [rbp-40h]
  unsigned __int64 v23; // [rsp+18h] [rbp-30h]

  v23 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 68) & 0x18) != 0 )
    return v23 - __readfsqword(0x28u);
  ptr = nullptr;
  v22 = 0;
  v3 = *(_QWORD **)(qword_2CA1698 + 1384);
  v3[34] = a1;
  v4 = sub_3AB4B0((_DWORD *)a1, (__int64 *)&ptr);
  v3[34] = 0;
  if ( v4 )
  {
    v5 = v22;
    v6 = *(_DWORD *)(a1 + 40);
    if ( (_QWORD)v22 )
    {
      *(_DWORD *)(a1 + 68) |= 0x40u;
      if ( v6 != 3 )
      {
        v7 = *(_DWORD *)ptr;
LABEL_7:
        v8 = *(_DWORD *)(a1 + 52);
        if ( v8 != v7 )
        {
          sub_3A91C0(a1, v8);
          *(_DWORD *)(a1 + 52) = v7;
          sub_3A72A0(a1, v7);
        }
        goto LABEL_9;
      }
    }
    else if ( v6 != 3 )
    {
      v7 = -1;
      goto LABEL_7;
    }
    v10 = *(unsigned int *)(a1 + 52);
    if ( v10 >= v3[7] )
    {
      if ( !under_debugger )
        interr(40037);
      BUG();
    }
    v11 = (_QWORD *)(v3[6] + 32 * v10);
    v12 = (unsigned int *)ptr;
    v13 = 4 * v5;
    v14 = (unsigned int *)*v11;
    v15 = (char *)ptr;
    v9 = (char *)*v11;
    for ( i = 4LL * v11[1]; ; i = 4LL * v11[1] )
    {
      v17 = (unsigned int *)&v15[v13];
      if ( v14 == (unsigned int *)&v9[i] )
      {
LABEL_22:
        if ( v12 == v17 || (v19 = *v12, *v12 == -1) )
        {
LABEL_28:
          *v11 = v15;
          v20 = v11[2];
          ptr = v9;
          *(_OWORD *)(v11 + 1) = v22;
          *((_QWORD *)&v22 + 1) = v20;
          goto LABEL_10;
        }
LABEL_24:
        sub_3A72A0(a1, v19);
        ++v12;
      }
      else
      {
        while ( 1 )
        {
          v18 = *v14;
          if ( v12 == v17 )
            break;
          v19 = *v12;
          if ( (*v12 & v18) == 0xFFFFFFFF )
            goto LABEL_28;
          if ( v18 < v19 )
            goto LABEL_27;
          if ( v19 < v18 )
            goto LABEL_24;
          ++v14;
          v17 = (unsigned int *)&v15[v13];
          ++v12;
          if ( v14 == (unsigned int *)&v9[i] )
            goto LABEL_22;
        }
        if ( v18 == -1 )
          goto LABEL_28;
LABEL_27:
        sub_3A91C0(a1, v18);
        ++v14;
      }
      v9 = (char *)*v11;
      v15 = (char *)ptr;
      v13 = 4 * v22;
    }
  }
LABEL_9:
  v9 = (char *)ptr;
LABEL_10:
  if ( v9 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v9);
  }
  return v23 - __readfsqword(0x28u);
}

