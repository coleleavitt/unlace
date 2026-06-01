/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8091BB0
// Address: 0x08091BB0

//----- (08091BB0) --------------------------------------------------------
int __usercall sub_8091BB0@<eax>(char *a1@<eax>, int a2@<edx>)
{
  int v2; // eax
  char *v3; // eax
  int v4; // ecx
  char *v5; // edi
  void *v6; // eax
  _BYTE *v8; // eax
  char *v9; // edx
  unsigned __int8 v11; // [esp+7h] [ebp-5061h]
  void *ptr; // [esp+10h] [ebp-5058h] BYREF
  int v14; // [esp+14h] [ebp-5054h]
  unsigned int v15; // [esp+18h] [ebp-5050h]
  char v16[4]; // [esp+20h] [ebp-5048h] BYREF
  char v17[8216]; // [esp+24h] [ebp-5044h] BYREF
  int v18; // [esp+203Ch] [ebp-302Ch]
  int v19; // [esp+2044h] [ebp-3024h]
  char v20[4096]; // [esp+404Ch] [ebp-101Ch] BYREF
  unsigned int v21; // [esp+504Ch] [ebp-1Ch]

  v21 = __readgsdword(0x14u);
  v11 = sub_80CED40((int)a1);
  if ( !v11 )
  {
    v20[0] = 0;
    ptr = nullptr;
    v14 = 0;
    v15 = 0;
    while ( 1 )
    {
      v3 = sub_80CE780(a1);
      v4 = v14;
      v5 = v3;
      v6 = ptr;
      if ( v15 < v14 + 1 )
      {
        v6 = sub_80CF920((int)&ptr, ptr, v14 + 1, 4u);
        v4 = v14;
        ptr = v6;
      }
      *((_DWORD *)v6 + v4) = v5;
      v2 = ++v14;
      if ( a1 == v5 )
        break;
      *(v5 - 1) = 0;
      if ( (unsigned __int8)sub_80CEDA0((int)a1) )
      {
        sub_80D0740((unsigned int)v20, a1, 4096);
        v2 = v14;
        break;
      }
    }
    if ( v2 )
    {
      while ( 1 )
      {
        v9 = *((char **)ptr + v2 - 1);
        v14 = v2 - 1;
        if ( v20[0] )
          sub_80CE680(v20, 4096, v20, v9, 0);
        else
          sub_80D0740((unsigned int)v20, v9, 4096);
        v18 = 0;
        v19 = 0;
        if ( sub_80CE3F0(v20, (int)v16, (v14 != 0) << 14) )
          break;
        v8 = sub_80CE780(v20);
        sub_80D0740((unsigned int)v8, v17, 4096 - (v8 - v20));
        sub_80CE450((int)v16);
        v2 = v14;
        if ( !v14 )
          goto LABEL_7;
      }
      sub_80CE450((int)v16);
    }
    else
    {
LABEL_7:
      sub_80D0740((unsigned int)a1, v20, a2);
      v11 = 1;
    }
    if ( ptr )
    {
      v14 = 0;
      sub_80CF780(ptr);
    }
  }
  if ( v21 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v11;
}
