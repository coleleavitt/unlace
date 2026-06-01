/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C50F0
// Address: 0x080C50F0

//----- (080C50F0) --------------------------------------------------------
int __cdecl sub_80C50F0(int a1)
{
  int v1; // esi
  const char *v2; // edi
  unsigned int v3; // edx
  void *v4; // eax
  unsigned int v5; // esi
  char *v6; // eax
  const char *v7; // edx
  char i; // al
  int v9; // esi
  unsigned int v10; // edx
  void *v11; // eax
  int v12; // esi
  unsigned int v13; // edx
  char v14; // cl
  void *v15; // eax
  int result; // eax
  int v17; // esi
  unsigned int v18; // edi
  void *v19; // eax
  void *v20; // eax
  int v21; // edx
  void *v22; // ecx
  __int64 v23; // xmm0_8
  char v24; // [esp+7h] [ebp-35h]
  unsigned int v25; // [esp+8h] [ebp-34h]
  unsigned int v26; // [esp+8h] [ebp-34h]
  int v27; // [esp+Ch] [ebp-30h]
  void *ptr; // [esp+14h] [ebp-28h] BYREF
  __int64 v29; // [esp+18h] [ebp-24h]
  unsigned int v30; // [esp+20h] [ebp-1Ch]

  v30 = __readgsdword(0x14u);
  v1 = *(_DWORD *)(a1 + 4);
  if ( !v1 )
  {
    ptr = nullptr;
    v2 = (const char *)&dword_80DDFD8;
    v3 = 2;
    v29 = 0;
    goto LABEL_3;
  }
  v2 = *(const char **)a1;
  if ( !**(_BYTE **)a1 || (v6 = strpbrk(v2, (const char *)&qword_811CFF4 - 271802), v7 = v2, v6) )
  {
LABEL_8:
    ptr = nullptr;
    v29 = 0;
    v3 = v1 + 1;
    if ( v1 == -1 )
    {
      v4 = ptr;
      v5 = 2;
      goto LABEL_10;
    }
LABEL_3:
    v4 = sub_80CF920((int)&ptr, nullptr, v3, 1u);
    ptr = v4;
    if ( (_DWORD)v29 )
    {
      v3 = v29 - 1;
      v5 = v29 + 1;
      if ( HIDWORD(v29) >= (unsigned int)(v29 + 1) )
      {
LABEL_11:
        LODWORD(v29) = v5;
        *((_BYTE *)v4 + v3) = 39;
        *((_BYTE *)ptr + v3 + 1) = 0;
        for ( i = *v2; *v2; i = *v2 )
        {
          if ( i == 39 || i == 34 || i == 92 )
          {
            v9 = v29;
            v10 = 2;
            if ( (_DWORD)v29 )
            {
              v10 = v29 + 1;
              v9 = v29 - 1;
            }
            v11 = ptr;
            if ( HIDWORD(v29) < v10 )
            {
              v26 = v10;
              v11 = sub_80CF920((int)&ptr, ptr, v10, 1u);
              v10 = v26;
              ptr = v11;
            }
            LODWORD(v29) = v10;
            *((_BYTE *)v11 + v9) = 92;
            *((_BYTE *)ptr + v9 + 1) = 0;
          }
          v12 = v29;
          ++v2;
          v13 = 2;
          v14 = *(v2 - 1);
          if ( (_DWORD)v29 )
          {
            v13 = v29 + 1;
            v12 = v29 - 1;
          }
          v15 = ptr;
          if ( HIDWORD(v29) < v13 )
          {
            v24 = *(v2 - 1);
            v25 = v13;
            v15 = sub_80CF920((int)&ptr, ptr, v13, 1u);
            v14 = v24;
            v13 = v25;
            ptr = v15;
          }
          LODWORD(v29) = v13;
          *((_BYTE *)v15 + v12) = v14;
          *((_BYTE *)ptr + v12 + 1) = 0;
        }
        v17 = v29;
        v18 = 2;
        if ( (_DWORD)v29 )
        {
          v18 = v29 + 1;
          v17 = v29 - 1;
        }
        v19 = ptr;
        if ( HIDWORD(v29) < v18 )
        {
          v19 = sub_80CF920((int)&ptr, ptr, v18, 1u);
          ptr = v19;
        }
        LODWORD(v29) = v18;
        *((_BYTE *)v19 + v17) = 39;
        *((_BYTE *)ptr + v17 + 1) = 0;
        v21 = *(_DWORD *)(a1 + 8);
        v22 = ptr;
        v23 = v29;
        ptr = *(void **)a1;
        v20 = ptr;
        *(_DWORD *)a1 = v22;
        HIDWORD(v29) = v21;
        *(_QWORD *)(a1 + 4) = v23;
        if ( v20 )
        {
          LODWORD(v29) = 0;
          sub_80CF780(v20);
        }
        result = 1;
        goto LABEL_28;
      }
LABEL_5:
      v27 = v3;
      v4 = sub_80CF920((int)&ptr, v4, v5, 1u);
      v3 = v27;
      ptr = v4;
      goto LABEL_11;
    }
    v3 = 0;
    v5 = 2;
LABEL_10:
    if ( HIDWORD(v29) >= 2 )
      goto LABEL_11;
    goto LABEL_5;
  }
  while ( 1 )
  {
    result = *(unsigned __int8 *)v7;
    if ( !(_BYTE)result )
      break;
    ++v7;
    if ( (_BYTE)result == 34 || (_BYTE)result == 39 )
      goto LABEL_8;
  }
LABEL_28:
  if ( v30 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
// 811CFF4: using guessed type __int64 qword_811CFF4;
