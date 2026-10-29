/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8096D80
// Address: 0x08096D80

//----- (08096D80) --------------------------------------------------------
int __cdecl sub_8096D80(int *a1, char a2, int a3)
{
  int v3; // esi
  size_t v4; // edx
  size_t v5; // edx
  int v6; // edi
  size_t v7; // esi
  _DWORD *v8; // eax
  int result; // eax
  unsigned int v10; // eax
  int *v11; // eax
  unsigned int v12; // eax
  int *v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  char *s1; // [esp+0h] [ebp-3Ch]
  char *dest; // [esp+4h] [ebp-38h]
  size_t n; // [esp+8h] [ebp-34h]
  const char *src; // [esp+Ch] [ebp-30h]
  char v21; // [esp+1Ah] [ebp-22h] BYREF
  char v22; // [esp+1Bh] [ebp-21h] BYREF
  unsigned int v23; // [esp+1Ch] [ebp-20h]

  v23 = __readgsdword(0x14u);
  v3 = a3;
  if ( !a2 )
    sub_80926A0((int)a1, a3);
  if ( (unsigned __int8)sub_8094240((int)a1, a3) )
    goto LABEL_25;
  if ( sub_8096B50(a1, a3, &v22) )
  {
    result = -1;
  }
  else
  {
    if ( !v22 )
    {
      if ( !*(_DWORD *)(a3 + 4) )
        goto LABEL_29;
      if ( !*(_DWORD *)a3 )
        JUMPOUT(0x804F714);
      src = *(const char **)a3;
      v4 = strlen(*(const char **)a3);
      if ( v4 )
      {
        n = v4;
        s1 = (char *)std::string::_Rep::_S_create(v4, 0, &v21);
        dest = s1 + 12;
        v5 = n;
        if ( n == 1 )
        {
          s1[12] = *src;
        }
        else
        {
          memcpy(dest, src, n);
          v5 = n;
        }
        if ( s1 != (char *)std::string::_Rep::_S_empty_rep_storage )
        {
          *((_DWORD *)s1 + 2) = 0;
          *(_DWORD *)s1 = v5;
          s1[v5 + 12] = 0;
        }
        if ( (unsigned int)a1[15] > 0x14 )
        {
          v10 = std::_Hash_bytes(dest, *(_DWORD *)s1, 0xC70F6907);
          v11 = sub_8092120(a1[12], a1[13], v10 % a1[13], dest, v10);
          if ( v11 )
          {
            v6 = *v11;
            if ( s1 == (char *)std::string::_Rep::_S_empty_rep_storage )
              goto LABEL_37;
            if ( !&_pthread_key_create )
            {
              v14 = *((_DWORD *)s1 + 2);
              *((_DWORD *)s1 + 2) = v14 - 1;
LABEL_44:
              if ( v14 > 0 )
                goto LABEL_37;
              goto LABEL_45;
            }
LABEL_43:
            v14 = _InterlockedExchangeAdd((volatile signed __int32 *)dest - 1, 0xFFFFFFFF);
            goto LABEL_44;
          }
        }
        else
        {
          v6 = a1[14];
          if ( v6 )
            goto LABEL_15;
        }
      }
      else
      {
LABEL_29:
        if ( (unsigned int)a1[15] <= 0x14 )
        {
          v6 = a1[14];
          if ( v6 )
          {
            dest = (char *)&std::string::_Rep::_S_empty_rep_storage[3];
            s1 = (char *)std::string::_Rep::_S_empty_rep_storage;
LABEL_15:
            v7 = *((_DWORD *)dest - 3);
            while ( 1 )
            {
              v8 = *(_DWORD **)(v6 + 4);
              if ( v7 == *(v8 - 3) )
                break;
LABEL_16:
              v6 = *(_DWORD *)v6;
              if ( !v6 )
              {
LABEL_32:
                v3 = a3;
                goto LABEL_33;
              }
            }
            if ( v7 )
            {
              while ( memcmp(dest, v8, v7) )
              {
                v6 = *(_DWORD *)v6;
                if ( !v6 )
                  goto LABEL_32;
                v8 = *(_DWORD **)(v6 + 4);
                if ( *(v8 - 3) != v7 )
                  goto LABEL_16;
              }
            }
            v3 = a3;
            if ( s1 == (char *)std::string::_Rep::_S_empty_rep_storage )
              goto LABEL_24;
            if ( &_pthread_key_create )
              goto LABEL_43;
            v15 = *((_DWORD *)dest - 1);
            *((_DWORD *)dest - 1) = v15 - 1;
            if ( v15 > 0 )
              goto LABEL_24;
LABEL_45:
            std::string::_Rep::_M_destroy(s1, &v22);
LABEL_37:
            if ( !v6 )
              goto LABEL_34;
LABEL_24:
            *(_WORD *)(v3 + 12) = *(_WORD *)(v6 + 8);
LABEL_25:
            result = 0;
            goto LABEL_26;
          }
LABEL_34:
          *(_WORD *)(v3 + 12) = 2;
          goto LABEL_25;
        }
        v12 = std::_Hash_bytes(
                &std::string::_Rep::_S_empty_rep_storage[3],
                std::string::_Rep::_S_empty_rep_storage[0],
                0xC70F6907);
        v13 = sub_8092120(a1[12], a1[13], v12 % a1[13], &std::string::_Rep::_S_empty_rep_storage[3], v12);
        if ( v13 )
        {
          v6 = *v13;
          goto LABEL_37;
        }
        dest = (char *)&std::string::_Rep::_S_empty_rep_storage[3];
        s1 = (char *)std::string::_Rep::_S_empty_rep_storage;
      }
LABEL_33:
      if ( s1 != (char *)std::string::_Rep::_S_empty_rep_storage )
      {
        if ( !&_pthread_key_create )
        {
          v16 = *((_DWORD *)dest - 1);
          *((_DWORD *)dest - 1) = v16 - 1;
          if ( v16 <= 0 )
            std::string::_Rep::_M_destroy(s1, &v22);
          goto LABEL_34;
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)dest - 1, 0xFFFFFFFF) <= 0 )
        {
          v6 = 0;
          goto LABEL_45;
        }
      }
      goto LABEL_34;
    }
    result = 1;
  }
LABEL_26:
  if ( v23 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 8096DF9: control flows out of bounds to 804F714
// 804BAD0: using guessed type int __cdecl std::string::_Rep::_S_create(_DWORD, _DWORD, _DWORD);
// 811F9B0: using guessed type unsigned int std::string::_Rep::_S_empty_rep_storage[4];
