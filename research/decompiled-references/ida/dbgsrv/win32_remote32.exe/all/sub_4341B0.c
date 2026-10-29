/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4341B0
// Address: 0x004341B0

//----- (004341B0) --------------------------------------------------------
int *__userpurge sub_4341B0@<eax>(int a1@<ecx>, int a2@<ebx>, const char *a3)
{
  __int128 *v3; // esi
  char *v4; // edi
  int v5; // edx
  unsigned int i; // ecx
  int v7; // eax
  int *v8; // esi
  char *v9; // eax
  int *result; // eax
  int *v11; // [esp+Ch] [ebp-38h] BYREF
  int v12; // [esp+14h] [ebp-30h]
  int **v13; // [esp+18h] [ebp-2Ch]
  __int128 v14; // [esp+1Ch] [ebp-28h] BYREF
  unsigned int v15; // [esp+2Ch] [ebp-18h]
  unsigned int v16; // [esp+30h] [ebp-14h]
  int v17; // [esp+40h] [ebp-4h]

  v12 = a1;
  v13 = *(int ***)(a1 + 284);
  v14 = 0;
  v15 = 0;
  v16 = 0;
  sub_4300C0(&v14, (unsigned int)a3, strlen(a3));
  v3 = &v14;
  v4 = (char *)v14;
  v5 = -2128831035;
  if ( v16 > 0xF )
    v3 = (__int128 *)v14;
  for ( i = 0; i < v15; v5 = 16777619 * (v5 ^ v7) )
    v7 = *((unsigned __int8 *)v3 + i++);
  v8 = sub_430150(v13, &v11, &v14, v5)[1];
  if ( !v8 )
    v8 = v13[1];
  if ( v16 > 0xF )
  {
    v9 = v4;
    v17 = 0;
    if ( v16 + 1 >= 0x1000 )
    {
      v4 = *((char **)v4 - 1);
      if ( (unsigned int)(v9 - v4 - 4) > 0x1F )
      {
        sub_467F04(a2, (int)v4);
        JUMPOUT(0x4342D7);
      }
    }
    sub_4627F2(v4);
  }
  result = v8 + 8;
  if ( v8 == *(int **)(*(_DWORD *)(v12 + 284) + 4) )
    return nullptr;
  return result;
}
// 4342D2: control flows out of bounds to 4342D7
