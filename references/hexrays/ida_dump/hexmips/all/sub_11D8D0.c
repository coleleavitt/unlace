__int64 __fastcall sub_11D8D0(__int64 a1, __int64 a2, int a3, _DWORD *a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rsi
  bool v8; // zf
  __int64 *v11; // rdi
  unsigned int v12; // ebx
  __int64 v14; // [rsp+0h] [rbp-58h] BYREF
  __int64 v15; // [rsp+8h] [rbp-50h]
  _BYTE v16[16]; // [rsp+10h] [rbp-48h] BYREF
  int v17; // [rsp+20h] [rbp-38h]
  unsigned __int64 v18; // [rsp+28h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  v7 = *(unsigned int *)(a1 + 4);
  if ( (int)v7 < a3 )
    return 0;
  v8 = *(_BYTE *)a1 == 15;
  v14 = 0;
  v15 = 0;
  if ( v8 )
  {
    v11 = *(__int64 **)(a1 + 8);
    if ( !v11 )
      goto LABEL_6;
  }
  else
  {
    if ( !(unsigned __int8)sub_1C0C70(a1, &v14) )
      goto LABEL_6;
    v7 = *(unsigned int *)(a1 + 4);
    v11 = &v14;
  }
  v12 = sub_1BFA00(v11, v7, a2, (unsigned int)a3, v16, a6, v14, v15);
  if ( (_BYTE)v12 )
  {
    if ( a4 )
      *a4 = v17;
    goto LABEL_7;
  }
LABEL_6:
  v12 = 0;
LABEL_7:
  cleanup_argloc(&v14);
  return v12;
}
