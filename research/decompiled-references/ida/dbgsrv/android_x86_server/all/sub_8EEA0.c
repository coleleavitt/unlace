/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8EEA0
// Address: 0x0008EEA0

//----- (0008EEA0) --------------------------------------------------------
int __cdecl sub_8EEA0(int a1, const char **a2)
{
  unsigned int v2; // esi
  const void *v3; // ecx
  void *v4; // eax
  int v6; // [esp+1Ch] [ebp-60h]
  int v7; // [esp+20h] [ebp-5Ch] BYREF
  unsigned int v8; // [esp+24h] [ebp-58h]
  int v9; // [esp+28h] [ebp-54h]
  __int128 v10; // [esp+30h] [ebp-4Ch] BYREF
  __int128 v11; // [esp+40h] [ebp-3Ch]
  int v12; // [esp+50h] [ebp-2Ch]
  int (*v13)(char *, ...); // [esp+54h] [ebp-28h]
  char v14; // [esp+58h] [ebp-24h]
  unsigned int v15; // [esp+68h] [ebp-14h]

  v15 = __readgsdword(0x14u);
  sub_55370();
  if ( sub_2B4F0() )
  {
    v7 = 0;
    v8 = 0;
    v9 = 0;
    if ( (unsigned __int8)qgetenv("IDA_DBGSRV_PASSWD", (int)&v7) )
    {
      v2 = v8;
      if ( v8 < 2 )
      {
        unk_13BE80 = 0;
      }
      else
      {
        v3 = (const void *)v7;
        v4 = (void *)dword_13BE7C;
        if ( *(_DWORD *)((char *)&qword_13BE81 + 3) < v8 )
        {
          v6 = v7;
          v4 = qvector_reserve((int)&dword_13BE7C, (void *)dword_13BE7C, v8, 1u);
          dword_13BE7C = (int)v4;
          v3 = (const void *)v6;
        }
        unk_13BE80 = v2;
        memmove(v4, v3, v2 - 1);
        *(_BYTE *)(dword_13BE7C + v2 - 1) = 0;
      }
    }
    sub_98F70("IDA Android x86 32-bit remote debug server(ST) v%d.%d.%d. Hex-Rays (c) 2004-2026\n", 9, 3, 31);
    HIBYTE(qword_13BE81) = dword_13BE2C;
    v11 = 0;
    v10 = 0;
    v12 = 0;
    v13 = sub_98F70;
    v14 = 1;
    sub_939E0((int)&dword_13BE40, &v10, 1);
    cliopts_t_add(&v10, (__int64 *)&off_1386E8, 1);
    if ( HIBYTE(qword_13BE81) )
      cliopts_t_add(&v10, (__int64 *)&dword_1386FC, 2);
    cliopts_t_apply((int)&v10, a1, a2, (int)&dword_13BE40);
    sub_93C50((int)&dword_13BE40);
    sub_93CB0((int)&dword_13BE40);
    if ( DWORD2(v11) )
    {
      HIDWORD(v11) = 0;
      qfree((void *)DWORD2(v11));
      DWORD2(v11) = 0;
      v12 = 0;
    }
    if ( HIDWORD(v10) )
    {
      LODWORD(v11) = 0;
      qfree((void *)HIDWORD(v10));
      HIDWORD(v10) = 0;
      DWORD1(v11) = 0;
    }
    if ( (_DWORD)v10 )
    {
      DWORD1(v10) = 0;
      qfree((void *)v10);
      LODWORD(v10) = 0;
      DWORD2(v10) = 0;
    }
    if ( v7 )
    {
      v8 = 0;
      qfree((void *)v7);
      v7 = 0;
      v9 = 0;
    }
    return 0;
  }
  else
  {
    sub_98F70("Could not initialize subsystem!");
    return -1;
  }
}
// 1386E8: using guessed type int off_1386E8;
// 1386FC: using guessed type int dword_1386FC;
// 13BE2C: using guessed type int dword_13BE2C;
// 13BE40: using guessed type int dword_13BE40;
// 13BE7C: using guessed type int dword_13BE7C;
// 13BE81: using guessed type __int64 qword_13BE81;
