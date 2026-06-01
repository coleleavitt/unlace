/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_437A40
// Address: 0x00437A40

//----- (00437A40) --------------------------------------------------------
char __thiscall sub_437A40(_DWORD *this, char *a2, char a3)
{
  struct _RTL_CRITICAL_SECTION *v4; // esi
  void *v5; // eax
  char v6; // bl
  char *v7; // eax
  _BYTE *v8; // ecx
  unsigned int v9; // edi
  unsigned int v10; // eax
  char *v11; // edx
  _DWORD *v12; // edi
  int v13; // eax
  unsigned int v14; // eax
  int v15; // ecx
  unsigned int v16; // eax
  char *v17; // ecx
  _BYTE *v19; // [esp+1Ch] [ebp-28h] BYREF
  unsigned int v20; // [esp+20h] [ebp-24h]
  int v21; // [esp+24h] [ebp-20h]
  LPCRITICAL_SECTION v22; // [esp+28h] [ebp-1Ch]
  void *v23; // [esp+2Ch] [ebp-18h]
  __int8 *v24; // [esp+30h] [ebp-14h] BYREF
  int v25; // [esp+34h] [ebp-10h]
  int v26; // [esp+40h] [ebp-4h]
  unsigned int v27; // [esp+4Ch] [ebp+8h]
  unsigned int i; // [esp+50h] [ebp+Ch]
  _BYTE *v29; // [esp+50h] [ebp+Ch]

  v4 = dword_4B6B40;
  v22 = dword_4B6B40;
  sub_4562D0(dword_4B6B40);
  v26 = 0;
  if ( !a3 && *(this + 3) )
  {
    sub_415F90(this + 3, 0);
    sub_453A20((void *)*(this + 3));
    *(this + 3) = 0;
    *(this + 5) = 0;
  }
  if ( !a2 )
    goto LABEL_24;
  v5 = sub_453A90(a2);
  v23 = v5;
  if ( v5 )
  {
    v7 = sub_45ADE0((__int8 *)v5, ";", &v24);
    for ( i = (unsigned int)v7; v7; i = (unsigned int)v7 )
    {
      if ( *v7 )
      {
        v8 = nullptr;
        v19 = nullptr;
        v20 = 0;
        v21 = 0;
        LOBYTE(v26) = 2;
        v9 = strlen(v7);
        v10 = v9 + 1;
        if ( v9 != -1 )
        {
          v8 = sub_453B00((int)&v19, nullptr, v9 + 1, 1u);
          v10 = v9 + 1;
          v19 = v8;
        }
        v20 = v10;
        sub_464310((unsigned int)v8, i, v9);
        v19[v9] = 0;
        v11 = (char *)*(this + 3);
        v12 = this + 3;
        LOBYTE(v26) = 3;
        if ( &v19 < (_BYTE **)v11 || &v19 >= (_BYTE **)&v11[12 * *(this + 5)] )
        {
          v16 = *(this + 4) + 1;
          if ( v16 > *(this + 5) )
          {
            v11 = (char *)sub_453B00((int)(this + 3), v11, v16, 0xCu);
            *v12 = v11;
          }
          v17 = &v11[12 * *(this + 4)];
          *(_DWORD *)v17 = v19;
          v19 = nullptr;
          *((_DWORD *)v17 + 1) = v20;
          v20 = 0;
          *((_DWORD *)v17 + 2) = v21;
          v21 = 0;
        }
        else
        {
          v13 = *(this + 4);
          v29 = v19;
          v27 = v20;
          v19 = nullptr;
          v20 = 0;
          v25 = v21;
          v21 = 0;
          v14 = v13 + 1;
          LOBYTE(v26) = 4;
          if ( v14 > *(this + 5) )
          {
            v11 = (char *)sub_453B00((int)(this + 3), v11, v14, 0xCu);
            *v12 = v11;
          }
          v15 = 3 * *(this + 4);
          *(_DWORD *)&v11[4 * v15] = v29;
          *(_DWORD *)&v11[4 * v15 + 4] = v27;
          *(_DWORD *)&v11[4 * v15 + 8] = v25;
        }
        ++*(this + 4);
        LOBYTE(v26) = 8;
        if ( v19 )
        {
          v20 = 0;
          sub_453A20(v19);
          v19 = nullptr;
          v21 = 0;
        }
        LOBYTE(v26) = 0;
      }
      v7 = sub_45ADE0(nullptr, ";", &v24);
    }
    sub_453A20(v23);
LABEL_24:
    v6 = 1;
    goto LABEL_25;
  }
  v6 = 0;
LABEL_25:
  v26 = 9;
  sub_4562F0(v4);
  return v6;
}
