/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4671DB
// Address: 0x004671DB

//----- (004671DB) --------------------------------------------------------
int __cdecl sub_4671DB(_DWORD *a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // eax
  int v8; // ebx
  _DWORD *v10; // eax
  _DWORD *v11; // eax
  char v12[8]; // [esp+10h] [ebp-4Ch] BYREF
  int v13; // [esp+18h] [ebp-44h]
  int v14; // [esp+1Ch] [ebp-40h]
  int v15; // [esp+20h] [ebp-3Ch]
  int v16; // [esp+24h] [ebp-38h]
  int FrameInfo; // [esp+28h] [ebp-34h]
  int v18; // [esp+2Ch] [ebp-30h]
  int v19; // [esp+40h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+44h] [ebp-18h]

  v19 = a5;
  v14 = 0;
  v18 = *(_DWORD *)(a2 - 4);
  FrameInfo = _CreateFrameInfo(v12, a1[6]);
  v16 = *((_DWORD *)sub_4667C5(a2, nullptr, (int)a1) + 4);
  v15 = *((_DWORD *)sub_4667C5(a2, nullptr, (int)a1) + 5);
  *((_DWORD *)sub_4667C5(a2, nullptr, (int)a1) + 4) = a1;
  *((_DWORD *)sub_4667C5(a2, nullptr, (int)a1) + 5) = a3;
  v13 = 1;
  ms_exc.registration.TryLevel = 1;
  sub_463F91(a2, a4, a5, a6, a7);
  v8 = v7;
  v19 = v7;
  ms_exc.registration.TryLevel = -2;
  v13 = 0;
  *(_DWORD *)(a2 - 4) = v18;
  sub_4641C9(v7, nullptr, (int)a1, FrameInfo);
  v10 = sub_4667C5(v8, nullptr, (int)a1);
  v10[4] = v16;
  v11 = sub_4667C5(v8, nullptr, (int)a1);
  v11[5] = v15;
  if ( *a1 == -529697949
    && a1[4] == 3
    && (a1[5] == 429065504 || a1[5] == 429065505 || a1[5] == 429065506)
    && !v14
    && v8
    && sub_463E6A(v8, nullptr, (int)a1, a1[6]) )
  {
    sub_463D5D(a1);
  }
  return v8;
}
// 467259: variable 'v7' is possibly undefined
// 4641A5: using guessed type _DWORD __cdecl _CreateFrameInfo(_DWORD, _DWORD);
