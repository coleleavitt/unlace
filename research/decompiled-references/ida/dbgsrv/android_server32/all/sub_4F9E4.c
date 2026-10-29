/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4F9E4
// Address: 0x0004F9E4

//----- (0004F9E4) --------------------------------------------------------
int __fastcall sub_4F9E4(int a1, char *s)
{
  size_t v3; // r5
  char *v4; // r6
  unsigned __int8 *v5; // r6
  int *v6; // r0
  int v7; // r1
  char *v8; // r0
  int v9; // r1
  char *v10; // r0
  int v12; // [sp+8h] [bp-1Ch]
  unsigned int v13; // [sp+Ch] [bp-18h]
  unsigned int v15; // [sp+14h] [bp-10h] BYREF
  size_t v16; // [sp+18h] [bp-Ch]
  void *ptr; // [sp+1Ch] [bp-8h]

  ptr = nullptr;
  v16 = 0;
  v15 = 0;
  v13 = a1 + 468;
  v3 = strlen(s);
  if ( v3 >= 0xFFFFFFF0 )
    sub_55F54();
  v12 = a1;
  if ( v3 >= 0xB )
  {
    v4 = (char *)operator new((v3 + 16) & 0xFFFFFFF0);
    ptr = v4;
    v15 = ((v3 + 16) & 0xFFFFFFF0) + 1;
    v16 = v3;
    goto LABEL_6;
  }
  LOBYTE(v15) = 2 * v3;
  v4 = (char *)&v15 + 1;
  if ( v3 )
LABEL_6:
    qmemcpy(v4, s, v3);
  v4[v3] = 0;
  v5 = sub_4FAE0(v13, (int *)&v15);
  if ( (unsigned __int8)v15 << 31 )
    operator delete(ptr);
  v6 = sub_4F0A0(v12, s);
  if ( v6 )
  {
    sub_4FD90((int)v5, (int)v6);
  }
  else
  {
    v7 = *((_DWORD *)v5 + 1);
    if ( *((_DWORD *)v5 + 2) >= (unsigned int)(v7 + 1) )
    {
      v8 = *(char **)v5;
    }
    else
    {
      v8 = (char *)qvector_reserve((int)v5, *(void **)v5, v7 + 1, 0x10u);
      *(_DWORD *)v5 = v8;
      v7 = *((_DWORD *)v5 + 1);
    }
    v9 = 16 * v7;
    *(_DWORD *)&v8[v9] = 0;
    v10 = &v8[v9];
    *((_WORD *)v10 + 6) = 0;
    *((_DWORD *)v10 + 1) = 0;
    *((_DWORD *)v10 + 2) = 0;
    ++*((_DWORD *)v5 + 1);
  }
  return 0;
}
