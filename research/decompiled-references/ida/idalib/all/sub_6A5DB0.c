__int64 __fastcall sub_6A5DB0(void (*a1)(const char *, ...), _QWORD *a2, int a3)
{
  unsigned int v6; // eax
  _DWORD *v8; // r8
  char *v9; // rdi
  _DWORD *v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rdx
  char v13[1032]; // [rsp+0h] [rbp-428h] BYREF
  unsigned __int64 v14; // [rsp+408h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  v6 = sub_6B3760(a2);
  if ( v6 <= 0x3FF )
  {
    v8 = (_DWORD *)*a2;
    v9 = v13;
    v10 = (_DWORD *)*a2;
    if ( v6 >= 8 )
    {
      v11 = v6 >> 3;
      qmemcpy(v13, v10, 8 * v11);
      v10 += 2 * v11;
      v9 = &v13[8 * v11];
    }
    v12 = 0;
    if ( (v6 & 4) != 0 )
    {
      *(_DWORD *)v9 = *v10;
      v12 = 4;
    }
    if ( (v6 & 2) != 0 )
    {
      *(_WORD *)&v9[v12] = *(_WORD *)((char *)v10 + v12);
      v12 += 2;
    }
    if ( (v6 & 1) != 0 )
      v9[v12] = *((_BYTE *)v10 + v12);
    v13[v6] = 0;
    *a2 = (char *)v8 + (int)v6;
    a1("//\t%*cName: %s\n", a3, 32, v13);
    return 1;
  }
  else
  {
    a1("\tGET_DT ERROR\n");
    return 0;
  }
}
