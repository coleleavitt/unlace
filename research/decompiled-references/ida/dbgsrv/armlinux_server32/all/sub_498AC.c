/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_498AC
// Address: 0x000498AC

//----- (000498AC) --------------------------------------------------------
int __fastcall sub_498AC(int a1, unsigned __int8 *a2, unsigned int a3, unsigned int a4, char a5)
{
  bool v7; // zf
  unsigned __int8 *v9; // r0
  int v10; // r3
  int v11; // r8
  int v12; // r9
  int v14; // r8
  unsigned __int8 *v15; // r8
  int v16; // r11
  _BOOL4 v18; // r2
  _BYTE *v19; // r0
  unsigned int v20; // r3
  size_t v21; // r10
  int v22; // r8
  void *v23; // r0
  __int64 v24; // r0
  int v25; // r2
  unsigned __int8 *v26; // [sp+0h] [bp-6Ch]
  __int64 ptr; // [sp+1Ch] [bp-50h] BYREF
  int v28; // [sp+24h] [bp-48h]
  int v29[2]; // [sp+28h] [bp-44h] BYREF
  unsigned int v30; // [sp+30h] [bp-3Ch]
  unsigned int v31; // [sp+34h] [bp-38h]
  unsigned int v32; // [sp+38h] [bp-34h]
  unsigned int v33; // [sp+3Ch] [bp-30h]
  char v34[32]; // [sp+44h] [bp-28h] BYREF

  v7 = a2 == nullptr;
  if ( a2 )
    v7 = a1 == 0;
  if ( v7 )
    return sub_70B98(1568);
  v9 = a2;
  while ( 1 )
  {
    v10 = *v9;
    if ( v10 == 7 )
    {
      v20 = *((_DWORD *)v9 + 3);
      if ( v20 )
        --v20;
      if ( (a3 & 0x80000000) == 0 || (a3 += v20, (a3 & 0x80000000) == 0) )
      {
        if ( a3 >= v20 )
          a3 = v20;
      }
      else
      {
        a3 = 0;
      }
      if ( (a5 & 1) != 0 )
        a4 = a3 + 1;
      if ( (a4 & 0x80000000) == 0 || (a4 += v20, (a4 & 0x80000000) == 0) )
      {
        if ( a4 >= v20 )
          a4 = v20;
      }
      else
      {
        a4 = 0;
      }
      if ( a3 > a4 )
      {
        ptr = 0;
        v28 = 0;
      }
      else
      {
        v21 = a4 - a3;
        v22 = *((_DWORD *)v9 + 2);
        ptr = 0;
        v28 = 0;
        if ( v21 )
        {
          if ( v21 == -1 )
          {
            v23 = nullptr;
          }
          else
          {
            v23 = sub_78018((int)&ptr, nullptr, v21 + 1, 1u);
            LODWORD(ptr) = v23;
          }
          HIDWORD(ptr) = v21 + 1;
          memmove(v23, (const void *)(v22 + a3), v21);
          *(_BYTE *)(ptr + v21) = 0;
        }
      }
      sub_45758((unsigned __int8 *)a1);
      v24 = ptr;
      v12 = 0;
      v25 = v28;
      *(_BYTE *)a1 = 7;
      *(_QWORD *)(a1 + 8) = v24;
      *(_DWORD *)(a1 + 16) = v25;
      return v12;
    }
    if ( v10 != 10 )
      break;
    v9 = sub_45BF0(v9, 0);
    if ( !v9 )
      return sub_70B7C();
  }
  v11 = (int)v9;
  if ( v10 != 5 )
    return sub_70B98(1568);
  if ( (a5 & 1) != 0 )
  {
    sub_7EBB4(v34, 32, "%u", a3);
    return sub_49534((unsigned __int8 *)a1, v11, v34, 0);
  }
  LOBYTE(v29[0]) = 2;
  v30 = a5 & 1;
  v31 = v30;
  v32 = v30;
  v33 = v30;
  v12 = sub_469F0((int)v29, v30);
  if ( v12 )
    goto LABEL_59;
  v14 = *(_DWORD *)(v11 + 8);
  ptr = 0;
  v28 = 0;
  ptr = (unsigned int)sub_78018((int)&ptr, nullptr, 3u, 1u) | 0x300000000LL;
  v26 = (unsigned __int8 *)(v14 + 4);
  *(_WORD *)ptr = -209;
  *(_BYTE *)(ptr + 2) = 0;
  v15 = (unsigned __int8 *)sub_4253C(*(_DWORD **)(v14 + 8), (_DWORD *)(v14 + 4), (int)&ptr);
  if ( (_DWORD)ptr )
  {
    HIDWORD(ptr) = 0;
    sub_77F70((void *)ptr);
  }
  if ( v26 == v15 )
  {
LABEL_29:
    sub_42624((int *)a1, v29);
    sub_45758((unsigned __int8 *)v29);
    return v12;
  }
  while ( !*((_DWORD *)v15 + 5) )
  {
    if ( strcmp((const char *)&dword_8DB98, ":") >= 0 )
      goto LABEL_29;
LABEL_28:
    v15 = (unsigned __int8 *)sub_81440((int)v15);
    if ( v26 == v15 )
      goto LABEL_29;
  }
  v16 = *((_DWORD *)v15 + 4);
  if ( strcmp((const char *)v16, ":") >= 0 )
    goto LABEL_29;
  if ( !*(_BYTE *)v16 )
    goto LABEL_28;
  if ( !(*(_BYTE *)v16 == 48 ? *(_BYTE *)(v16 + 1) == 0 : sub_4250C((_BYTE *)v16)) )
    goto LABEL_28;
  sub_7EC4C(v16, "%u", &ptr);
  if ( (unsigned int)ptr < a3 )
    goto LABEL_28;
  v18 = a4 != 0x7FFFFFFF;
  if ( (unsigned int)ptr < a4 )
    v18 = 0;
  if ( v18 )
    goto LABEL_28;
  sub_7EBB4(v34, 32, "%u", (_DWORD)ptr - a3);
  v19 = sub_48E9C(v29, v34, v15 + 32, 0);
  if ( !v19 )
    goto LABEL_28;
  v12 = (int)v19;
LABEL_59:
  sub_45758((unsigned __int8 *)v29);
  return v12;
}
// 8DB98: using guessed type int dword_8DB98;
