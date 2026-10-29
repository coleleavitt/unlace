/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_69C70
// Address: 0x00069C70

//----- (00069C70) --------------------------------------------------------
int __cdecl sub_69C70(int a1, int a2, char a3)
{
  _DWORD *v4; // eax
  int v5; // eax
  char *v6; // eax
  int v7; // eax
  int v8; // eax
  _BYTE *v9; // ecx
  char v10; // dl
  _QWORD v11[4]; // [esp+8h] [ebp-34h] BYREF
  unsigned int v12; // [esp+28h] [ebp-14h]

  v12 = __readgsdword(0x14u);
  sub_6A690(a1);
  if ( a2 )
  {
    *(_DWORD *)(a1 + 248) = a2;
    *(_BYTE *)(a1 + 272) = 1;
    return 0;
  }
  *(_BYTE *)(a1 + 272) = 0;
  if ( !*(_DWORD *)(a1 + 248) )
  {
    v4 = operator new(0x14u);
    v4[1] = 0;
    *v4 = 0;
    v4[3] = 0;
    v4[2] = 0;
    v4[4] = 1065353216;
    *(_DWORD *)(a1 + 248) = v4;
  }
  if ( !sub_6ADB0(a1, "__IDC__", "1", 0, 0, nullptr)
    && !sub_6ADB0(a1, "far", "__far", 0, 0, nullptr)
    && !sub_6ADB0(a1, "near", "__near", 0, 0, nullptr)
    && !sub_6ADB0(a1, "huge", "__huge", 0, 0, nullptr)
    && !sub_6ADB0(a1, "interrupt", "__interrupt", 0, 0, nullptr)
    && !sub_6ADB0(a1, "_cdecl", "__cdecl", 0, 0, nullptr)
    && !sub_6ADB0(a1, "_pascal", "__pascal", 0, 0, nullptr)
    && !sub_6ADB0(a1, "_stdcall", "__stdcall", 0, 0, nullptr)
    && !sub_6ADB0(a1, "_fastcall", "__fastcall", 0, 0, nullptr)
    && !sub_6ADB0(a1, "_thiscall", "__thiscall", 0, 0, nullptr)
    && !sub_6ADB0(a1, "_export", "__export", 0, 0, nullptr)
    && !sub_6ADB0(a1, "_import", "__import", 0, 0, nullptr) )
  {
    if ( (a3 & 1) == 0 && !(_BYTE)dword_13C2FC )
      return 0;
    if ( !sub_6ADB0(a1, "__LINUX__", "1", 0, 0, nullptr)
      && !sub_6ADB0(a1, "__UNIX__", "1", 0, 0, nullptr)
      && !sub_6ADB0(a1, "__X86__", "1", 0, 0, nullptr) )
    {
      if ( (_BYTE)dword_13C2FC )
      {
        v5 = dword_13B6A0;
        if ( dword_13B6A0 == -1 )
        {
          ((void (__stdcall *)(_QWORD *, int))callui)(v11, 53);
          dword_13B6A0 = BYTE4(v11[0]);
          (*(void (__cdecl **)(char *, int, __int64 *))LODWORD(v11[0]))((char *)v11 + 4, 52, &qword_13BDF0);
          v5 = dword_13B6A0;
        }
        if ( v5 )
        {
          sub_6ADB0(a1, "__QT__", "1", 0, 0, nullptr);
          v6 = "__GUI__";
        }
        else
        {
          v6 = "__TXT__";
        }
        sub_6ADB0(a1, v6, "1", 0, 0, nullptr);
        sub_6ADB0(a1, "__IDA_VERSION__", (char *)&qword_13BDF0, 0, 0, nullptr);
        v11[3] = qword_13BE08;
        v11[2] = qword_13BE00;
        v11[1] = qword_13BDF8;
        v11[0] = qword_13BDF0;
        v7 = __strchr_chk(v11, 46, 32);
        if ( v7 )
        {
          v8 = v7 + 1;
          v9 = (_BYTE *)v8;
          do
          {
            v10 = *v9;
            *(v9 - 1) = *v9;
            ++v9;
          }
          while ( v10 );
          if ( (unsigned int)&v9[~v8] <= 1 )
            *((_WORD *)v9 - 1) = 48;
        }
        sub_6ADB0(a1, "__IDAVER__", (char *)v11, 0, 0, nullptr);
      }
      return 0;
    }
  }
  return get_qerrno();
}
// 17C00: using guessed type int __cdecl __strchr_chk(_DWORD, _DWORD, _DWORD);
// 13B6A0: using guessed type int dword_13B6A0;
// 13BC20: using guessed type int (__stdcall *callui)(int);
// 13BDF0: using guessed type __int64 qword_13BDF0;
// 13BDF8: using guessed type __int64 qword_13BDF8;
// 13BE00: using guessed type __int64 qword_13BE00;
// 13BE08: using guessed type __int64 qword_13BE08;
// 13C2FC: using guessed type int dword_13C2FC;
