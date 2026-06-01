/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47EAC0
// Address: 0x000000000047EAC0

//----- (000000000047EAC0) ----------------------------------------------------
__int64 __fastcall sub_47EAC0(__int64 a1, char *a2, char a3)
{
  __int64 v4; // rax
  __int64 *v6; // r13
  unsigned __int64 v7; // r15
  __int64 v8; // rax
  unsigned __int8 *v9; // rdx
  char *v10; // rdi
  unsigned __int8 *v11; // rdx
  unsigned __int8 *v13; // rax
  unsigned __int8 *v14; // rax
  __int64 v15; // [rsp+8h] [rbp-1080h]
  int v16; // [rsp+10h] [rbp-1078h]
  void *ptr; // [rsp+20h] [rbp-1068h] BYREF
  __int128 v18; // [rsp+28h] [rbp-1060h]
  unsigned __int64 v19; // [rsp+1048h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 8);
  v19 = __readfsqword(0x28u);
  v15 = 0;
  v16 = v4;
  if ( (a3 & 1) != 0 )
    v15 = sub_475E10();
  if ( (a3 & 2) != 0 )
  {
    v13 = (unsigned __int8 *)sub_47E160(a2);
    sub_47DE40((char **)a1, a3, v13, v15, 0);
    v6 = sub_47E8E0();
    if ( v6[1] )
      goto LABEL_5;
    if ( !a2 )
      return (unsigned int)*(_QWORD *)(a1 + 8) - v16;
  }
  else
  {
    v6 = sub_47E8E0();
    if ( v6[1] )
    {
LABEL_5:
      v7 = 0;
      do
      {
        v8 = *v6 + 24 * v7;
        v9 = (unsigned __int8 *)s1;
        if ( *(_QWORD *)(v8 + 8) )
          v9 = *(unsigned __int8 **)v8;
        ++v7;
        sub_47DE40((char **)a1, a3, v9, a2, v15, 0);
      }
      while ( v7 < v6[1] );
      if ( !a2 )
        goto LABEL_18;
      goto LABEL_10;
    }
    if ( !a2 )
      goto LABEL_28;
  }
LABEL_10:
  if ( !strcmp(a2, "sig") )
  {
    ptr = nullptr;
    v10 = "IDASGN";
    v18 = 0;
  }
  else if ( !strcmp(a2, "ids") )
  {
    v10 = "IDAIDS";
    ptr = nullptr;
    v18 = 0;
  }
  else if ( !strcmp(a2, "idc") )
  {
    v10 = "IDAIDC";
    ptr = nullptr;
    v18 = 0;
  }
  else
  {
    if ( strcmp(a2, "til") )
      goto LABEL_18;
    v10 = "IDATIL";
    ptr = nullptr;
    v18 = 0;
  }
  if ( (unsigned __int8)sub_4837D0(v10, (__int64)&ptr) )
  {
    v11 = (unsigned __int8 *)s1;
    if ( (_QWORD)v18 )
      v11 = (unsigned __int8 *)ptr;
    sub_47DE40((char **)a1, a3, v11, v15, 0);
  }
  if ( ptr )
  {
    *(_QWORD *)&v18 = 0;
    j__free(ptr);
  }
LABEL_18:
  if ( (a3 & 2) == 0 )
  {
LABEL_28:
    v14 = (unsigned __int8 *)sub_47E160(a2);
    sub_47DE40((char **)a1, a3, v14, v15, 0);
  }
  return (unsigned int)*(_QWORD *)(a1 + 8) - v16;
}
