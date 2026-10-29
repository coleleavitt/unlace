/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4373C0
// Address: 0x004373C0

//----- (004373C0) --------------------------------------------------------
int __userpurge sub_4373C0@<eax>(_DWORD *a1@<ecx>, int a2@<ebx>, __m128i a3@<xmm0>, char a4, int a5)
{
  int v5; // edi
  const char *v6; // edx
  __int128 *v7; // eax
  int v8; // edx
  unsigned int v9; // ecx
  __int128 *v10; // edi
  int v11; // eax
  void *v12; // edx
  __int16 v13; // ax
  int *v15; // [esp+Ch] [ebp-38h] BYREF
  _DWORD *v16; // [esp+10h] [ebp-34h]
  int *v17; // [esp+14h] [ebp-30h]
  char v18; // [esp+1Bh] [ebp-29h] BYREF
  __int128 v19; // [esp+1Ch] [ebp-28h] BYREF
  unsigned int v20; // [esp+2Ch] [ebp-18h]
  unsigned int v21; // [esp+30h] [ebp-14h]
  int v22; // [esp+40h] [ebp-4h]

  v5 = (int)a1;
  v16 = a1;
  if ( !a4 )
    sub_4338A0(a1, a5);
  if ( sub_437EF0(v5, a3, a5) )
    return 0;
  if ( sub_433090((const CHAR **)v5, a2, a3, (char *)a5, &v18) )
    return -1;
  if ( v18 != 1 )
  {
    if ( v18 != 2 )
    {
      v6 = MultiByteStr;
      if ( *(_DWORD *)(a5 + 4) )
        v6 = *(const char **)a5;
      v20 = 0;
      v21 = 0;
      v19 = 0;
      v17 = (int *)(v6 + 1);
      sub_4300C0(&v19, (unsigned int)v6, strlen(v6));
      v7 = &v19;
      v8 = -2128831035;
      if ( v21 > 0xF )
        v7 = (__int128 *)v19;
      v9 = 0;
      if ( v20 )
      {
        v10 = v7;
        do
        {
          v11 = *((unsigned __int8 *)v10 + v9++);
          v8 = 16777619 * (v8 ^ v11);
        }
        while ( v9 < v20 );
        v5 = (int)v16;
      }
      v17 = sub_430150((int **)(v5 + 48), &v15, &v19, v8)[1];
      if ( !v17 )
        v17 = *(int **)(v5 + 52);
      if ( v21 > 0xF )
      {
        v12 = (void *)v19;
        v22 = 0;
        if ( v21 + 1 >= 0x1000 )
        {
          v12 = *(void **)(v19 - 4);
          if ( (unsigned int)(v19 - (_DWORD)v12 - 4) > 0x1F )
          {
            sub_467F04(a2, v5);
            JUMPOUT(0x437550);
          }
        }
        sub_4627F2(v12);
      }
      if ( v17 == *(int **)(v5 + 52) )
        v13 = 2;
      else
        v13 = *((_WORD *)v17 + 16);
      *(_WORD *)(a5 + 12) = v13;
    }
    return 0;
  }
  return 1;
}
// 43754B: control flows out of bounds to 437550
