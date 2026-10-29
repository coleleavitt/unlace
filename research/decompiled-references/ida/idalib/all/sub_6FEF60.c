void __fastcall sub_6FEF60(__int64 a1, char **a2)
{
  char **v2; // rax
  _QWORD *v3; // r8
  char *v4; // rdx
  char *v5; // rcx
  unsigned int v6; // r9d
  unsigned __int64 v7; // rcx
  char *v8; // r8
  char *v9; // r11
  unsigned int v10; // r9d
  unsigned int v11; // r9d
  unsigned int v12; // r8d
  __int64 v13; // r10

  v2 = *(char ***)(a1 + 8);
  if ( v2 != *(char ***)(a1 + 16) )
  {
    v3 = v2 + 2;
    v4 = (char *)(a2 + 2);
    *v2 = (char *)(v2 + 2);
    if ( *a2 == (char *)(a2 + 2) )
    {
      v5 = a2[1];
      v6 = (_DWORD)v5 + 1;
      if ( (unsigned int)((_DWORD)v5 + 1) >= 8 )
      {
        v2[2] = a2[2];
        *(_QWORD *)((char *)v3 + v6 - 8) = *(_QWORD *)&v4[v6 - 8];
        v7 = (unsigned __int64)(v2 + 3) & 0xFFFFFFFFFFFFFFF8LL;
        v8 = (char *)v3 - v7;
        v9 = (char *)(v4 - v8);
        v10 = ((_DWORD)v8 + v6) & 0xFFFFFFF8;
        if ( v10 >= 8 )
        {
          v11 = v10 & 0xFFFFFFF8;
          v12 = 0;
          do
          {
            v13 = v12;
            v12 += 8;
            *(_QWORD *)(v7 + v13) = *(_QWORD *)&v9[v13];
          }
          while ( v12 < v11 );
        }
      }
      else
      {
        if ( (v6 & 4) != 0 )
        {
          *((_DWORD *)v2 + 4) = *((_DWORD *)a2 + 4);
          *(_DWORD *)((char *)v3 + v6 - 4) = *(_DWORD *)&v4[v6 - 4];
          v5 = a2[1];
          goto LABEL_5;
        }
        if ( (_DWORD)v5 == -1 )
        {
LABEL_5:
          v2[1] = v5;
          *a2 = v4;
          a2[1] = nullptr;
          *((_BYTE *)a2 + 16) = 0;
          *(_QWORD *)(a1 + 8) += 32LL;
          return;
        }
        *((_BYTE *)v2 + 16) = *((_BYTE *)a2 + 16);
        if ( (v6 & 2) != 0 )
        {
          *(_WORD *)((char *)v3 + v6 - 2) = *(_WORD *)&v4[v6 - 2];
          v5 = a2[1];
          goto LABEL_5;
        }
      }
    }
    else
    {
      *v2 = *a2;
      v2[2] = a2[2];
    }
    v5 = a2[1];
    goto LABEL_5;
  }
  sub_6FEC80(a1, a2);
}
