/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CC440
// Address: 0x080CC440

//----- (080CC440) --------------------------------------------------------
unsigned int __cdecl sub_80CC440(char **a1, char *s)
{
  const char *v2; // esi
  void *v3; // ebx
  __int64 v4; // xmm0_8
  char *v5; // eax
  size_t v6; // edx
  void *v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // esi
  char *v10; // eax
  void *v11; // edx
  unsigned int result; // eax
  char *v13; // eax
  char *v14; // edx
  __int64 v15; // [esp+0h] [ebp-58h]
  char *accept; // [esp+Ch] [ebp-4Ch]
  int v17; // [esp+10h] [ebp-48h]
  int i; // [esp+14h] [ebp-44h]
  size_t n; // [esp+18h] [ebp-40h]
  int v20; // [esp+2Ch] [ebp-2Ch] BYREF
  void *ptr; // [esp+30h] [ebp-28h] BYREF
  __int64 v22; // [esp+34h] [ebp-24h]
  unsigned int v23; // [esp+3Ch] [ebp-1Ch]

  v23 = __readgsdword(0x14u);
  if ( a1 )
  {
    if ( s )
    {
      v17 = (int)&v20;
      accept = ":";
      v2 = sub_80D0690(s, ":", (const char **)&v20);
      for ( i = (int)&ptr; v2; v2 = sub_80D0690(nullptr, accept, (const char **)v17) )
      {
        if ( *v2 )
        {
          ptr = nullptr;
          v22 = 0;
          n = strlen(v2);
          LODWORD(v15) = n + 1;
          ptr = sub_80CF920(i, nullptr, n + 1, 1u);
          LODWORD(v22) = v15;
          memmove(ptr, v2, n);
          *((_BYTE *)ptr + n) = 0;
          v14 = a1[1];
          v13 = *a1;
          v8 = (unsigned int)a1[2];
          v9 = (unsigned int)(v14 + 1);
          if ( i < (unsigned int)*a1 || i >= (unsigned int)&v13[12 * v8] )
          {
            if ( v8 < v9 )
            {
              v13 = (char *)sub_80CF920((int)a1, v13, (unsigned int)(v14 + 1), 0xCu);
              v14 = a1[1];
              *a1 = v13;
            }
            v10 = &v13[12 * (_DWORD)v14];
            v11 = ptr;
            *(_QWORD *)(v10 + 4) = v22;
            *(_DWORD *)v10 = v11;
            ++a1[1];
          }
          else
          {
            v3 = ptr;
            v4 = v22;
            ptr = nullptr;
            v22 = 0;
            n = (size_t)v3;
            if ( v8 < v9 )
            {
              v15 = v4;
              v13 = (char *)sub_80CF920((int)a1, v13, (unsigned int)(v14 + 1), 0xCu);
              v14 = a1[1];
              v4 = v15;
              *a1 = v13;
            }
            v5 = &v13[12 * (_DWORD)v14];
            v6 = n;
            *(_QWORD *)(v5 + 4) = v4;
            *(_DWORD *)v5 = v6;
            v7 = ptr;
            ++a1[1];
            if ( v7 )
            {
              LODWORD(v22) = 0;
              sub_80CF780(v7);
            }
          }
        }
      }
    }
  }
  result = v23 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
