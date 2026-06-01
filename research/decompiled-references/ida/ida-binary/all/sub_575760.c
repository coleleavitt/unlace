void __fastcall sub_575760(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi
  int v4; // edx
  char *v5; // rax
  int v6; // ebp
  char *v7; // rbx

  v2 = *(void **)(a1 + 40);
  if ( v2 )
  {
    off_8C52A0(v2);
    *(_QWORD *)(a1 + 40) = 0;
    *(_QWORD *)(a1 + 48) = 0;
  }
  v3 = *(void **)(a1 + 56);
  if ( v3 )
  {
    off_8C52A0(v3);
    *(_QWORD *)(a1 + 56) = 0;
    *(_QWORD *)(a1 + 64) = 0;
  }
  sub_575730(a1 + 8);
  v4 = *(_DWORD *)(a1 + 80);
  v5 = *(char **)(a1 + 72);
  if ( (_WORD)v4 )
  {
    v6 = 0;
    do
    {
      while ( 1 )
      {
        v7 = &v5[16 * (unsigned __int16)v6];
        if ( !*(_QWORD *)v7 )
          break;
        off_8C52A0(*(void **)v7);
        *((_QWORD *)v7 + 1) = 0;
        v4 = *(_DWORD *)(a1 + 80);
        ++v6;
        *(_QWORD *)v7 = 0;
        v5 = *(char **)(a1 + 72);
        if ( (unsigned __int16)v6 >= (unsigned __int16)v4 )
          goto LABEL_9;
      }
      ++v6;
    }
    while ( (unsigned __int16)v6 < (unsigned __int16)v4 );
  }
LABEL_9:
  if ( v5 )
  {
    off_8C52A0(v5);
    *(_QWORD *)(a1 + 72) = 0;
    *(_QWORD *)(a1 + 80) = 0;
  }
  off_8C52A0((void *)a1);
}
