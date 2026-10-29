/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_416BE0
// Address: 0x00416BE0

//----- (00416BE0) --------------------------------------------------------
int __userpurge sub_416BE0@<eax>(int a1@<ecx>, int a2@<ebp>, int a3, int a4)
{
  int v4; // ebx
  int v6; // ecx
  int v7; // ebp
  int v8; // esi
  _DWORD *v9; // ebx
  const char *v10; // eax
  int result; // eax
  double v12; // [esp-8h] [ebp-420h]
  int v13; // [esp+0h] [ebp-418h]
  char v14[1024]; // [esp+14h] [ebp-404h] BYREF

  v4 = a3;
  (*(void (__thiscall **)(int, _DWORD, char *, int))(*(_DWORD *)a1 + 28))(a1, *(_DWORD *)a3, v14, 1024);
  if ( a4 > 0 )
    sub_4104E0(a1, (int)"%*c", a4, 32);
  sub_4104E0(a1, (int)"%s: fl=%X adr=%a #prm=%d\n", v14, *(_DWORD *)(a3 + 4), *(double *)(a3 + 12), v13);
  v6 = a4 + 2;
  if ( *(_DWORD *)(a3 + 16) )
  {
    HIDWORD(v12) = a2;
    sub_4104E0(a1, (int)"%*c", a4 + 2, 32);
    v7 = *(_DWORD *)(a3 + 16);
    v8 = 0;
    if ( (unsigned int)v7 < 0xF )
    {
      if ( v7 <= 0 )
      {
LABEL_12:
        sub_4104E0(a1, (int)"\n");
        v6 = a4 + 2;
        goto LABEL_13;
      }
    }
    else
    {
      v7 = 15;
    }
    v9 = (_DWORD *)(a3 + 20);
    do
    {
      v10 = pNodeName;
      if ( v8 )
        v10 = &byte_48A240;
      LODWORD(v12) = *v9;
      sub_4104E0(a1, (int)"%s0x%a", v10, v12);
      ++v8;
      ++v9;
    }
    while ( v8 < v7 );
    v4 = a3;
    goto LABEL_12;
  }
LABEL_13:
  result = *(_DWORD *)(v4 + 8);
  if ( result )
    return sub_416BE0(result, v6);
  return result;
}
// 416BE0: could not find valid save-restore pair for ebp
// 416C47: variable 'v13' is possibly undefined
// 416CA3: variable 'v12' is possibly undefined
// 48A240: using guessed type char byte_48A240;
