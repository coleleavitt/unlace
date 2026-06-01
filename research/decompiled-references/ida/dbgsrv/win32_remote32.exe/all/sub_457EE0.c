/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_457EE0
// Address: 0x00457EE0

//----- (00457EE0) --------------------------------------------------------
int __thiscall sub_457EE0(int this, const char *a2, const char *a3)
{
  int v4; // ebx
  const char *v5; // eax
  int v6; // eax
  const char *v7; // eax
  int v8; // eax
  _DWORD *v9; // esi
  int *v10; // ebx
  int v11; // esi
  unsigned int v12; // esi
  _DWORD *v13; // eax
  int v14; // ecx
  unsigned int v15; // esi
  unsigned int v16; // eax
  LPVOID v17; // eax
  int v18; // eax
  unsigned int v19; // esi
  int v20; // ebx
  char *v21; // eax
  const char *v22; // eax
  int result; // eax
  int v24; // esi
  int v25; // eax
  char *v26; // [esp+10h] [ebp-20h] BYREF
  int v27; // [esp+14h] [ebp-1Ch]
  unsigned int v28; // [esp+18h] [ebp-18h]
  LPVOID v29; // [esp+1Ch] [ebp-14h]
  _DWORD *v30; // [esp+20h] [ebp-10h]
  int v31; // [esp+2Ch] [ebp-4h]

  v4 = this + 4;
  v5 = MultiByteStr;
  if ( *(_DWORD *)(this + 4) )
    v5 = *(const char **)this;
  v6 = strcmp(v5, a2);
  if ( v6 )
    v6 = v6 < 0 ? -1 : 1;
  v30 = (_DWORD *)v4;
  if ( !v6 )
  {
    v7 = MultiByteStr;
    if ( *(_DWORD *)(this + 16) )
      v7 = *(const char **)(this + 12);
    v8 = strcmp(v7, a3);
    if ( v8 )
      v8 = v8 < 0 ? -1 : 1;
    if ( !v8 )
      return *(_DWORD *)(this + 24);
    v30 = (_DWORD *)(this + 4);
  }
  v9 = *(_DWORD **)(this + 24);
  v10 = (int *)(this + 24);
  v29 = v9;
  if ( v9 != (_DWORD *)-1 )
  {
    ((void (__cdecl *)(_DWORD))v9[1])(*v9);
    v11 = *(_DWORD *)((int (*)(void))v9[3])();
    sub_46C918(v29);
    *sub_46B984() = v11;
    *v10 = -1;
  }
  if ( !a2 )
  {
    v13 = v30;
    goto LABEL_21;
  }
  v12 = strlen(a2);
  if ( !v12 )
  {
    v13 = (_DWORD *)(this + 4);
    v10 = (int *)(this + 24);
LABEL_21:
    *v13 = 0;
    goto LABEL_22;
  }
  if ( v12 + 1 > *(_DWORD *)(this + 8) )
    *(_DWORD *)this = sub_453B00(this, *(void **)this, v12 + 1, 1u);
  *(_DWORD *)(this + 4) = v12 + 1;
  sub_464310(*(_DWORD *)this, (unsigned int)a2, v12);
  v10 = (int *)(this + 24);
  *(_BYTE *)(v12 + *(_DWORD *)this) = 0;
LABEL_22:
  v14 = this + 12;
  if ( a3 && (v15 = strlen(a3)) != 0 )
  {
    v16 = v15 + 1;
    if ( v15 + 1 > *(_DWORD *)(this + 20) )
    {
      v17 = sub_453B00(this + 12, *(void **)v14, v15 + 1, 1u);
      v14 = this + 12;
      *(_DWORD *)(this + 12) = v17;
      v10 = (int *)(this + 24);
      v16 = v15 + 1;
    }
    *(_DWORD *)(v14 + 4) = v16;
    sub_464310(*(_DWORD *)v14, (unsigned int)a3, v15);
    *(_BYTE *)(v15 + *(_DWORD *)(this + 12)) = 0;
  }
  else
  {
    *(_DWORD *)(this + 16) = 0;
  }
  v18 = sub_458240(a3, a2);
  *(_DWORD *)(this + 24) = v18;
  if ( v18 == -1 && *a2 >= 0 && sub_46B760((int)v10, *(unsigned __int8 *)a2) )
  {
    v26 = nullptr;
    v27 = 0;
    v28 = 0;
    v31 = 0;
    v26 = (char *)sub_453B00((int)&v26, nullptr, 3u, 1u);
    v27 = 3;
    strcpy(v26, "CP");
    v31 = 1;
    v19 = strlen(a2);
    v20 = v27 != 0 ? v27 - 1 : 0;
    if ( v19 + v20 + 1 <= v28 )
    {
      v21 = v26;
    }
    else
    {
      v21 = (char *)sub_453B00((int)&v26, v26, v19 + v20 + 1, 1u);
      v26 = v21;
    }
    v27 = v19 + v20 + 1;
    v21[v20 + v19] = 0;
    sub_464310((unsigned int)&v26[v20], (unsigned int)a2, v19);
    v22 = MultiByteStr;
    if ( v27 )
      v22 = v26;
    *(_DWORD *)(this + 24) = sub_458240(a3, v22);
    v31 = 2;
    if ( v26 )
    {
      v27 = 0;
      sub_453A20(v26);
      v26 = nullptr;
      v28 = 0;
    }
    v31 = -1;
    v10 = (int *)(this + 24);
  }
  result = *v10;
  if ( *v10 == -1 )
  {
    v24 = 0;
    while ( 1 )
    {
      v25 = strcmp(a2, off_4A2620[2 * v24]);
      if ( v25 )
        v25 = v25 < 0 ? -1 : 1;
      if ( !v25 )
        break;
      if ( (unsigned int)++v24 >= 0xA )
        return *(_DWORD *)(this + 24);
    }
    result = *(_DWORD *)(this + 24);
    if ( off_4A2624[2 * v24] )
    {
      result = sub_458240(a3, off_4A2624[2 * v24]);
      *(_DWORD *)(this + 24) = result;
    }
  }
  return result;
}
// 4A2620: using guessed type char *off_4A2620[20];
// 4A2624: using guessed type char *off_4A2624[19];
