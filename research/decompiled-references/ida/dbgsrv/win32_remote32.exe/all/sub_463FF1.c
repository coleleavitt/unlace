/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_463FF1
// Address: 0x00463FF1

//----- (00463FF1) --------------------------------------------------------
int __usercall sub_463FF1@<eax>(
        int a1@<ebx>,
        int *a2@<edi>,
        int a3@<esi>,
        int *a4,
        _DWORD *a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  int v11; // [esp+0h] [ebp-40h] BYREF
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // [esp+4h] [ebp-3Ch]
  int (__usercall *v13)@<eax>(struct _EXCEPTION_REGISTRATION_RECORD **@<ebx>, int *@<edi>, int@<esi>, PEXCEPTION_RECORD, _DWORD *, int); // [esp+8h] [ebp-38h]
  int v14; // [esp+10h] [ebp-30h]
  _DWORD *v15; // [esp+14h] [ebp-2Ch]
  int v16; // [esp+18h] [ebp-28h]
  int v17; // [esp+1Ch] [ebp-24h]
  int *v18; // [esp+20h] [ebp-20h]
  int *v19; // [esp+24h] [ebp-1Ch]
  int v20; // [esp+28h] [ebp-18h]
  _DWORD v21[3]; // [esp+2Ch] [ebp-14h] BYREF
  int v22; // [esp+38h] [ebp-8h]
  void (__cdecl *v23)(_DWORD, _DWORD *); // [esp+3Ch] [ebp-4h]
  int savedregs; // [esp+40h] [ebp+0h] BYREF

  if ( a4 == (int *)291 )
  {
    *a5 = &loc_4640C4;
    return 1;
  }
  else
  {
    v13 = sub_464211;
    v14 = a8;
    v15 = a5;
    v16 = a9;
    v17 = a10;
    v20 = 0;
    v18 = &v11;
    v19 = &savedregs;
    ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
    *a4 = sub_482AB2(*a4);
    v22 = 1;
    v21[0] = a4;
    v21[1] = a6;
    v23 = *((void (__cdecl **)(_DWORD, _DWORD *))sub_4667C5(a1, a2, a3) + 2);
    sub_482714(v11);
    v21[2] = v23;
    v23(*a4, v21);
    v22 = 0;
    if ( v20 )
      ExceptionList->Next = NtCurrentTeb()->NtTib.ExceptionList->Next;
    return v22;
  }
}
