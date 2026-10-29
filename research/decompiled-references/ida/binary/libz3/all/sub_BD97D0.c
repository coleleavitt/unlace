__int64 __fastcall sub_BD97D0(__int64 a1)
{
  _QWORD **v2; // rbp
  _QWORD **v3; // r13
  _QWORD *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 result; // rax
  char *v10; // rdi
  int v11; // ecx
  __int64 v12; // rsi
  char *v13; // rdx
  unsigned int v14; // ebx
  unsigned int v15; // ebx
  __int64 v16; // rdx
  int v17; // ecx
  __int64 v18; // rdx
  unsigned int v19; // esi

  sub_B30A70((_QWORD *)a1);
  v2 = *(_QWORD ***)(a1 + 448);
  if ( v2 )
  {
    v3 = &v2[*((unsigned int *)v2 - 1)];
    if ( v2 == v3 )
      goto LABEL_17;
    do
    {
      v4 = *v2;
      if ( *v2 )
      {
        v5 = v4[4];
        if ( v5 )
          sub_186B220((void *)(v5 - 8));
        v6 = v4[3];
        if ( v6 )
          sub_186B220((void *)(v6 - 8));
        v7 = v4[2];
        if ( v7 )
          sub_186B220((void *)(v7 - 8));
        v8 = v4[1];
        if ( v8 )
          sub_186B220((void *)(v8 - 8));
        if ( *v4 )
          sub_186B220((void *)(*v4 - 8LL));
        sub_186B220(v4);
      }
      ++v2;
    }
    while ( v3 != v2 );
    v3 = *(_QWORD ***)(a1 + 448);
    if ( v3 )
LABEL_17:
      *((_DWORD *)v3 - 1) = 0;
  }
  if ( *(_DWORD *)(a1 + 580) || (result = *(unsigned int *)(a1 + 584), (_DWORD)result) )
  {
    v10 = *(char **)(a1 + 568);
    v11 = 0;
    v12 = *(unsigned int *)(a1 + 576);
    v13 = &v10[24 * v12];
    result = (__int64)v10;
    if ( v10 == v13 )
      goto LABEL_37;
    do
    {
      while ( *(_QWORD *)result )
      {
        *(_QWORD *)result = 0;
        result += 24;
        if ( v13 == (char *)result )
          goto LABEL_25;
      }
      result += 24;
      ++v11;
    }
    while ( v13 != (char *)result );
LABEL_25:
    if ( (unsigned int)v12 <= 0x10 )
      goto LABEL_37;
    result = (unsigned int)(3 * v12);
    if ( (unsigned int)result >= 4 * v11 )
      goto LABEL_37;
    if ( v10 )
    {
      sub_186B220(v10);
      v14 = *(_DWORD *)(a1 + 576);
      *(_QWORD *)(a1 + 568) = 0;
      v15 = v14 >> 1;
      *(_DWORD *)(a1 + 576) = v15;
      result = sub_186B270(24LL * v15);
      if ( !v15 )
        goto LABEL_36;
      if ( v15 - 1 <= 2 )
      {
        v17 = v15;
        v18 = result;
        goto LABEL_33;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 568) = 0;
      v19 = (unsigned int)v12 >> 1;
      *(_DWORD *)(a1 + 576) = v19;
      v15 = v19;
      result = sub_186B270(24LL * v19);
    }
    v16 = result;
    do
    {
      *(_DWORD *)(v16 + 20) = 0;
      v16 += 96;
      *(_OWORD *)(v16 - 96) = 0;
      *(_OWORD *)(v16 - 72) = 0;
      *(_OWORD *)(v16 - 48) = 0;
      *(_OWORD *)(v16 - 24) = 0;
      *(_DWORD *)(v16 - 52) = 0;
      *(_DWORD *)(v16 - 28) = 0;
      *(_DWORD *)(v16 - 4) = 0;
    }
    while ( v16 != result + 96LL * (v15 >> 2) );
    v17 = v15 & 3;
    v18 = result + 24LL * (v15 & 0x7FFFFFFC);
    if ( (v15 & 3) != 0 )
    {
LABEL_33:
      *(_QWORD *)(v18 + 16) = 0;
      *(_OWORD *)v18 = 0;
      if ( v17 != 1 )
      {
        *(_QWORD *)(v18 + 40) = 0;
        *(_OWORD *)(v18 + 24) = 0;
        if ( v17 != 2 )
        {
          *(_QWORD *)(v18 + 64) = 0;
          *(_OWORD *)(v18 + 48) = 0;
        }
      }
    }
LABEL_36:
    *(_QWORD *)(a1 + 568) = result;
LABEL_37:
    *(_QWORD *)(a1 + 580) = 0;
  }
  return result;
}

