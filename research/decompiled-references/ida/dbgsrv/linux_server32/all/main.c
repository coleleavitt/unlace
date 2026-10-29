/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: main
// Address: 0x080529D0

//----- (080529D0) --------------------------------------------------------
int __cdecl main(int a1, const char **a2)
{
  int result; // eax
  int v3; // edi
  size_t v4; // edx
  void *v5; // ecx
  void *v6; // eax
  int v7; // [esp-Ch] [ebp-74h]
  void *v8; // [esp+0h] [ebp-68h]
  const char **v9; // [esp+4h] [ebp-64h]
  int v10; // [esp+8h] [ebp-60h]
  int v11; // [esp+Ch] [ebp-5Ch]
  void *src; // [esp+10h] [ebp-58h] BYREF
  int v13; // [esp+14h] [ebp-54h]
  int v14; // [esp+18h] [ebp-50h]
  char *v15[10]; // [esp+20h] [ebp-48h] BYREF
  char v16; // [esp+48h] [ebp-20h]
  unsigned int v17; // [esp+4Ch] [ebp-1Ch]
  int *v18; // [esp+58h] [ebp-10h]

  v18 = &a1;
  v10 = a1;
  v9 = a2;
  v17 = __readgsdword(0x14u);
  sub_8081240();
  if ( (unsigned __int8)sub_805D760() )
  {
    src = nullptr;
    v13 = 0;
    v14 = 0;
    if ( (unsigned __int8)sub_80D2000("IDA_DBGSRV_PASSWD", &src) )
    {
      v3 = v13;
      if ( v13 && (v4 = v13 - 1, v13 != 1) )
      {
        v5 = src;
        if ( dword_811E784 < (unsigned int)v13 )
        {
          v8 = src;
          v11 = v13 - 1;
          v6 = sub_80CF920((int)&dword_811E77C, (void *)dword_811E77C, v13, 1u);
          v5 = v8;
          v4 = v11;
          dword_811E77C = (int)v6;
        }
        dword_811E780 = v3;
        memmove((void *)dword_811E77C, v5, v4);
        *(_BYTE *)(dword_811E77C + v3 - 1) = 0;
      }
      else
      {
        dword_811E780 = 0;
      }
    }
    sub_80BF890("IDA Linux 32-bit remote debug server(ST) v%d.%d.%d. Hex-Rays (c) 2004-2026\n", 9);
    memset(v15, 0, 36);
    byte_811E788 = dword_811E720;
    v15[9] = (char *)sub_80BF890;
    v16 = 1;
    sub_80A4DE0((int)dword_811E740, v15, 1);
    sub_80C58A0((int)v15, v10, v9, (int)dword_811E740);
    sub_80BB180((int)dword_811E740);
    sub_80BB550((int)dword_811E740);
    sub_80A4D70((int)v15);
    if ( src )
    {
      v13 = 0;
      sub_80CF780(src);
    }
    result = 0;
  }
  else
  {
    sub_80BF890("Could not initialize subsystem!", v7);
    result = -1;
  }
  if ( v17 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 8052BC2: variable 'v7' is possibly undefined
// 811E720: using guessed type int dword_811E720;
// 811E740: using guessed type int dword_811E740[11];
// 811E77C: using guessed type int dword_811E77C;
// 811E780: using guessed type int dword_811E780;
// 811E784: using guessed type int dword_811E784;
// 811E788: using guessed type char byte_811E788;
