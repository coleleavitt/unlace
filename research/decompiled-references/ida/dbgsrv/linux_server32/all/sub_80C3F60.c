/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C3F60
// Address: 0x080C3F60

//----- (080C3F60) --------------------------------------------------------
int __cdecl sub_80C3F60(int a1, int a2)
{
  int v2; // edx
  int *v3; // ebp
  int v4; // edi
  unsigned int v5; // eax
  char v6; // si
  char *v7; // edx
  unsigned __int8 *v8; // esi
  int v9; // eax
  int v10; // edi
  unsigned __int8 v11; // si
  int result; // eax
  _BYTE *v13; // ebp
  int v14; // eax
  _WORD *v15; // ecx
  _WORD *v16; // ebp
  int v17; // edi
  _WORD *v18; // ebp
  unsigned __int8 v19; // si
  int v20; // [esp+4h] [ebp-454h]
  char *s; // [esp+8h] [ebp-450h]
  char *sa; // [esp+8h] [ebp-450h]
  int sb; // [esp+8h] [ebp-450h]
  char *v24; // [esp+Ch] [ebp-44Ch]
  _WORD *v25; // [esp+10h] [ebp-448h]
  int v26; // [esp+1Ch] [ebp-43Ch]
  _BYTE v27[16]; // [esp+28h] [ebp-430h] BYREF
  int v28[256]; // [esp+38h] [ebp-420h] BYREF
  _DWORD v29[8]; // [esp+438h] [ebp-20h] BYREF

  v20 = a1;
  v29[0] = __readgsdword(0x14u);
  off_811E568(v27);
  if ( !a1 )
  {
    if ( v29[0] == __readgsdword(0x14u) )
      return sub_8058290();
LABEL_25:
    sub_80D7AB0();
  }
  if ( a2 )
  {
    v2 = 0;
    v3 = v28;
    do
    {
      s = (char *)v2;
      v4 = v2 & 0xF;
      v5 = (unsigned int)(v2 >> 31) >> 28;
      v6 = v2 + v5;
      v7 = (char *)(v2 + 1);
      v24 = (char *)((unsigned __int8)v7 & 0xF);
      v8 = (unsigned __int8 *)(v20 + (v6 & 0xF) - v5);
      if ( v4 )
      {
        sa = v7;
        v9 = sub_80D3B60(v3, (char *)v29 - (char *)v3, " %02X", *v8);
        v2 = (int)sa;
        v3 = (int *)((char *)v3 + v9);
        if ( !v24 )
        {
          v10 = 0;
          *(_WORD *)v3 = 8736;
          do
          {
            v11 = *(_BYTE *)(v20 + v10);
            if ( strchr((const char *)dword_80F1088, v11) )
              v11 = 46;
            *((_BYTE *)v3 + v10++ + 2) = v11;
          }
          while ( v10 != 16 );
          *((_WORD *)v3 + 9) = 34;
          v3 = v28;
          sub_8058290();
          v20 += 16;
          v2 = (int)sa;
        }
      }
      else
      {
        v26 = (int)v7;
        v13 = (char *)v3 + sub_80D3B60(v3, (char *)v29 - (char *)v3, "%04X:", (int)s);
        v14 = sub_80D3B60(v13, (char *)v29 - v13, " %02X", *v8);
        v2 = v26;
        v3 = (int *)&v13[v14];
      }
    }
    while ( a2 != v2 );
    if ( v24 )
    {
      v15 = (_WORD *)((char *)v3 + sub_80D3B60(v3, (char *)v29 - (char *)v3, "%*c", -3 * (a2 % 16) + 48));
      *v15 = 8736;
      v16 = v15 + 1;
      if ( a2 % 16 > 0 )
      {
        sb = a2 % 16;
        v17 = 0;
        v25 = v15 + 1;
        v18 = v15;
        do
        {
          v19 = *(_BYTE *)(v20 + v17);
          if ( strchr((const char *)dword_80F1088, v19) )
            v19 = 46;
          *((_BYTE *)v18 + v17++ + 2) = v19;
        }
        while ( sb != v17 );
        v16 = (_WORD *)((char *)v25 + sb);
      }
      *v16 = 34;
      sub_8058290();
    }
  }
  result = v29[0] - __readgsdword(0x14u);
  if ( result )
    goto LABEL_25;
  return result;
}
// 80F1088: using guessed type int dword_80F1088[2];
// 811E568: using guessed type _DWORD (__stdcall *off_811E568)(_DWORD);
