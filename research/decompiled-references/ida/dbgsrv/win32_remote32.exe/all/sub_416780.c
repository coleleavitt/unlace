/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_416780
// Address: 0x00416780

//----- (00416780) --------------------------------------------------------
bool __thiscall sub_416780(int this, _DWORD *a2, int a3, int a4, unsigned int a5, unsigned int a6)
{
  unsigned int v6; // ebx
  int v8; // ecx
  HANDLE *v9; // ebp
  int v11; // edi
  char v12; // cl
  unsigned int v13; // eax
  int v14; // edx
  int v15; // [esp+10h] [ebp-Ch] BYREF
  int v16; // [esp+18h] [ebp-4h]

  v6 = a5;
  sub_408C10((int *)(this + 604), &v15, &a5);
  v8 = v16;
  if ( *(_BYTE *)(v16 + 13) || v6 < *(_DWORD *)(v16 + 16) )
    v8 = *(_DWORD *)(this + 604);
  v9 = nullptr;
  if ( v8 != *(_DWORD *)(this + 604) )
    v9 = (HANDLE *)(v8 + 20);
  if ( !v9 )
    return 0;
  v11 = *(_DWORD *)(a4 + 12);
  *(_DWORD *)(v11 + 176) = *a2;
  *(_DWORD *)(v11 + 164) = a2[1];
  *(_DWORD *)(v11 + 172) = a2[2];
  *(_DWORD *)(v11 + 168) = a2[3];
  *(_DWORD *)(v11 + 156) = a2[4];
  *(_DWORD *)(v11 + 160) = a2[5];
  *(_DWORD *)(v11 + 180) = a2[6];
  *(_DWORD *)(v11 + 196) = a2[7];
  *(_DWORD *)(v11 + 184) = a2[8];
  *(_DWORD *)(v11 + 192) = a2[9];
  *(_DWORD *)(v11 + 188) = a2[11];
  *(_DWORD *)(v11 + 144) = a2[14];
  *(_DWORD *)(v11 + 140) = a2[15];
  *(_DWORD *)(v11 + 200) = a2[10];
  *(_DWORD *)(v11 + 152) = a2[12];
  v12 = a6;
  *(_DWORD *)(v11 + 148) = a2[13];
  if ( (v12 & 0xC) != 0 )
  {
    if ( (v12 & 4) != 0 )
    {
      *(_DWORD *)(v11 + 28) = *(_DWORD *)(a3 + 644);
      *(_DWORD *)(v11 + 32) = *(_DWORD *)(a3 + 648);
      *(_DWORD *)(v11 + 36) = *(_DWORD *)(a3 + 652);
    }
    *(_QWORD *)(v11 + 56) = *(_QWORD *)a3;
    *(_WORD *)(v11 + 64) = *(_WORD *)(a3 + 8);
    *(_QWORD *)(v11 + 66) = *(_QWORD *)(a3 + 16);
    *(_WORD *)(v11 + 74) = *(_WORD *)(a3 + 24);
    *(_QWORD *)(v11 + 76) = *(_QWORD *)(a3 + 32);
    *(_WORD *)(v11 + 84) = *(_WORD *)(a3 + 40);
    *(_QWORD *)(v11 + 86) = *(_QWORD *)(a3 + 48);
    *(_WORD *)(v11 + 94) = *(_WORD *)(a3 + 56);
    *(_QWORD *)(v11 + 96) = *(_QWORD *)(a3 + 64);
    *(_WORD *)(v11 + 104) = *(_WORD *)(a3 + 72);
    *(_QWORD *)(v11 + 106) = *(_QWORD *)(a3 + 80);
    *(_WORD *)(v11 + 114) = *(_WORD *)(a3 + 88);
    *(_QWORD *)(v11 + 116) = *(_QWORD *)(a3 + 96);
    *(_WORD *)(v11 + 124) = *(_WORD *)(a3 + 104);
    *(_QWORD *)(v11 + 126) = *(_QWORD *)(a3 + 112);
    *(_WORD *)(v11 + 134) = *(_WORD *)(a3 + 120);
  }
  if ( (v12 & 0x30) != 0 )
  {
    sub_464310(v11 + 364, a3 + 128, 16 * *(_DWORD *)(this + 720));
    v12 = a6;
    *(_DWORD *)(v11 + 228) = *(_DWORD *)(a3 + 640);
  }
  if ( (v12 & 0x20) != 0 && *(int *)(this + 716) > 0 && (*(int (__stdcall **)(int, int, _DWORD))(this + 708))(v11, 4, 0) )
  {
    a6 = 0;
    (*(void (__stdcall **)(int, int, unsigned int *))(this + 704))(v11, 1, &a6);
    v13 = (*(int (__stdcall **)(int, int, _DWORD))(this + 704))(v11, 2, 0);
    v14 = 16;
    if ( a6 >> 4 < 0x10 )
      v14 = a6 >> 4;
    sub_464310(v13, a3 + 384, 16 * v14);
  }
  return SetThreadContext(*v9, (const CONTEXT *)v11);
}
