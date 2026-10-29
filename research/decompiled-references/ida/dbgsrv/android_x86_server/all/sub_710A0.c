/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_710A0
// Address: 0x000710A0

//----- (000710A0) --------------------------------------------------------
unsigned int __cdecl sub_710A0(int a1, int a2, char a3)
{
  int v3; // edi
  int v4; // eax
  int qerrno; // eax
  int v6; // eax
  char v8[4]; // [esp+8h] [ebp-24h] BYREF
  __int64 v9; // [esp+Ch] [ebp-20h]
  unsigned int v10; // [esp+18h] [ebp-14h]

  v10 = __readgsdword(0x14u);
  if ( a3 )
  {
    v3 = *(_DWORD *)(a1 + 228);
    v4 = sub_6EB10(a1, v3, 0, nullptr);
    if ( !v4 && *(_DWORD *)(a1 + 32) )
      v4 = sub_6FBF0(a1, v3);
    if ( v4 )
    {
      qerrno = get_qerrno();
      longjmp((struct __jmp_buf_tag *)(a1 + 188), qerrno);
    }
  }
  v8[0] = 1;
  v9 = 0;
  v6 = *(__int16 *)(*(_DWORD *)(a1 + 228) + 12);
  if ( v6 > 44 )
  {
    if ( (unsigned __int16)v6 == 126 )
    {
      sub_710A0(a1, v8, 1);
      *(_QWORD *)(a2 + 4) = ~v9;
      goto LABEL_17;
    }
    if ( (unsigned __int16)v6 == 45 )
    {
      sub_710A0(a1, v8, 1);
      *(_QWORD *)(a2 + 4) = -v9;
      goto LABEL_17;
    }
  }
  else
  {
    if ( (unsigned __int16)v6 == 33 )
    {
      sub_710A0(a1, v8, 1);
      *(_DWORD *)(a2 + 4) = v9 == 0;
      *(_DWORD *)(a2 + 8) = 0;
      goto LABEL_17;
    }
    if ( (unsigned __int16)v6 == 43 )
    {
      sub_710A0(a1, v8, 1);
      *(_QWORD *)(a2 + 4) = v9;
LABEL_17:
      *(_BYTE *)a2 = v8[0];
      return __readgsdword(0x14u);
    }
  }
  sub_712E0(a1, a2);
  return __readgsdword(0x14u);
}
