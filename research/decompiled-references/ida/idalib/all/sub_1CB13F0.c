void __fastcall sub_1CB13F0(__int64 a1, char a2)
{
  __int64 v3; // rbp
  _QWORD *v4; // r12
  _QWORD *v5; // rbx
  _QWORD *i; // r15
  __int64 v7; // r13
  __int64 v8; // rdx
  unsigned __int8 v9; // al
  int v10; // ecx
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // eax
  int v15; // ebx
  char *v16; // rdi
  unsigned int v17; // [rsp+0h] [rbp-48h]
  __int64 v18; // [rsp+0h] [rbp-48h]
  char v19; // [rsp+Fh] [rbp-39h]

  v3 = *(unsigned int *)(a1 + 16);
  v4 = *(_QWORD **)(a1 + 8);
  v19 = 0;
  v17 = *(_DWORD *)(a1 + 16);
  v5 = v4;
LABEL_2:
  for ( i = v4; ; ++i )
  {
    v7 = v3;
    v4 = i;
    if ( i == &v5[v3] )
      break;
    v8 = *i & 0xFFFFFFFFFFFFFFF8LL;
    v9 = *(_BYTE *)(v8 + 28) & 0x7F;
    v10 = v9;
    if ( ((v9 + 52) & 0x7Fu) <= 1 || (unsigned int)v9 - 53 <= 1 )
    {
      v8 = sub_B72ED0(*i & 0xFFFFFFFFFFFFFFF8LL);
      v9 = *(_BYTE *)(v8 + 28) & 0x7F;
      v10 = v9;
    }
    if ( (unsigned int)(v10 - 68) > 6 )
    {
      if ( (unsigned int)(v10 - 59) > 2 )
      {
        if ( v9 != 28 )
          goto LABEL_24;
      }
      else
      {
        v18 = v8;
        if ( !sub_B97450(v8) )
          goto LABEL_23;
        v11 = *(_QWORD *)(v18 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v18 + 16) & 4) != 0 )
          v11 = *(_QWORD *)v11;
        if ( v11 )
          v11 -= 64LL;
        if ( sub_B97230(v11) )
        {
          v12 = sub_B97230(v11);
        }
        else
        {
          if ( (*(_BYTE *)(v11 + 28) & 0x7Fu) - 60 > 1 )
          {
LABEL_23:
            v5 = *(_QWORD **)(a1 + 8);
            v17 = *(_DWORD *)(a1 + 16);
            v7 = v17;
LABEL_24:
            v3 = --v17;
            v13 = v5[v7 - 1];
            *(_DWORD *)(a1 + 16) = v17;
            if ( i != &v5[v17] )
            {
              *i = v13;
              v3 = *(unsigned int *)(a1 + 16);
              v5 = *(_QWORD **)(a1 + 8);
              v17 = *(_DWORD *)(a1 + 16);
            }
            v19 = 1;
            goto LABEL_2;
          }
          v12 = sub_BBF290(v11);
        }
        v5 = *(_QWORD **)(a1 + 8);
        v17 = *(_DWORD *)(a1 + 16);
        if ( !v12 )
        {
          v7 = v17;
          goto LABEL_24;
        }
        v3 = *(unsigned int *)(a1 + 16);
      }
    }
    else if ( v9 == 71 && a2 != 1 )
    {
      goto LABEL_24;
    }
  }
  if ( v19 )
  {
    v14 = *(_DWORD *)a1;
    if ( v17 )
    {
      v15 = 0;
      if ( v14 == 5 )
        v15 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = 2;
      sub_1A43500(a1);
      if ( *(_DWORD *)a1 == 5 )
      {
        *(_DWORD *)(a1 + 4) = v15;
        return;
      }
    }
    else if ( v14 != 1 )
    {
      *(_DWORD *)a1 = 0;
    }
    v16 = *(char **)(a1 + 88);
    if ( v16 )
    {
      sub_1A39780(v16);
      *(_QWORD *)(a1 + 88) = 0;
    }
  }
}
