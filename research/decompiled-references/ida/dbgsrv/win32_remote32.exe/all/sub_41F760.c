/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41F760
// Address: 0x0041F760

//----- (0041F760) --------------------------------------------------------
void __thiscall __noreturn sub_41F760(void *this, int a2, int a3, signed int a4)
{
  void *v4; // edi
  int v5; // esi
  _QWORD *v7; // eax
  int v8; // eax
  bool v9; // zf
  int v10; // eax
  char v11[8]; // [esp+10h] [ebp-34h] BYREF
  signed int v12; // [esp+18h] [ebp-2Ch]
  unsigned int v13[3]; // [esp+28h] [ebp-1Ch] BYREF
  void *v14; // [esp+34h] [ebp-10h]
  int v15; // [esp+40h] [ebp-4h]

  v4 = this;
  v14 = this;
  sub_41BC00(v11, 0);
  v15 = 0;
  v12 = a4;
  sub_41C880(v13);
  LOBYTE(v15) = 1;
  sub_422E30(v13, a4);
  v5 = 0;
  if ( a4 > 0 )
  {
    do
    {
      v7 = (_QWORD *)sub_41D020(v13, v5);
      sub_423330(v7, a3);
      ++v5;
      a3 += 24;
    }
    while ( v5 < a4 );
    v4 = v14;
  }
  sub_40D190((void **)v4 + 6);
  sub_40D190((void **)v4 + 9);
  sub_41F8B0((unsigned int *)v4 + 3);
  v8 = *((_DWORD *)v4 + 1);
  v9 = (*(_DWORD *)(v8 + 72))-- == 1;
  if ( v9 && off_4B406C )
    off_4B406C();
  *(_DWORD *)v4 = 0;
  v10 = sub_40CCE0(v13);
  (*(void (__stdcall **)(int, char *))(a2 + 4))(v10, v11);
  if ( byte_4B70F0 )
    __debugbreak();
  sub_4533F0(291);
}
// 4B406C: using guessed type int (*off_4B406C)();
// 4B70F0: using guessed type char byte_4B70F0;
