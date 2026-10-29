__int64 __fastcall sub_C8DED0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v7; // ebx
  __int64 result; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  unsigned int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rax
  unsigned int v16; // eax
  __int64 *v17; // rax
  unsigned int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rbx
  __int64 v22; // rax
  char v23; // dl
  __int64 *v24; // rax
  unsigned int v25; // eax
  __int64 v26; // rdi
  __int64 v27; // rax
  int v28; // ebx
  __int64 v29; // rdx
  __int64 v30; // r8
  int v31; // eax
  __int64 v32; // rdi
  __int64 v33; // rax
  int v34; // ebx
  __int64 v35; // rdx
  __int64 v36; // r8
  int v37; // eax
  __int64 v40[6]; // [rsp+18h] [rbp-30h] BYREF

  v7 = a3;
  if ( a2 == 12 )
  {
    switch ( (_DWORD)a3 )
    {
      case 0xC:
        v19 = sub_CC2920(*(_QWORD *)(a1 + 488), a4);
        v20 = *(_QWORD *)(a1 + 488);
        v21 = v19;
        v40[0] = a5 | 4;
        v22 = sub_CC2430(v20);
        v23 = ((unsigned int)sub_BDA860(a5, v22) >> 3) & 7;
        if ( v23 == 7 )
          v23 = 1;
        return sub_C83DD0((_QWORD *)a1, v21, v23, v40);
      case 8:
        v26 = *(_QWORD *)(a1 + 488);
        v40[0] = a5 | 4;
        v27 = sub_CC2430(v26);
        v28 = sub_BDA860(a5, v27);
        v31 = sub_A884B0(**(_QWORD **)(a1 + 488), a4, v29, a4, v30);
        return sub_C865B0(a1, v31, v28, v40);
      case 9:
        v32 = *(_QWORD *)(a1 + 488);
        v40[0] = a5 | 4;
        v33 = sub_CC2430(v32);
        v34 = sub_BDA860(a5, v33);
        v37 = sub_A884B0(**(_QWORD **)(a1 + 488), a4, v35, a4, v36);
        return sub_C817F0(a1, v37, v34, v40);
      default:
        result = 0;
        if ( (unsigned int)a3 <= 0xB )
        {
          v9 = *(_QWORD *)(a1 + 488);
          v40[0] = a5 | 4;
          v10 = sub_CC2430(v9);
          v11 = sub_BDA860(a5, v10);
          return sub_C80570(a1, v7, v11, v40);
        }
        break;
    }
  }
  else
  {
    result = 0;
    if ( a2 <= 0xB )
    {
      if ( (_DWORD)a3 == 8 )
      {
        v17 = *(__int64 **)(a1 + 488);
        v40[0] = a5 | 4;
        v18 = sub_A884B0(*v17, a4, a3, a4, a5);
        return sub_C80320(a1, a2, v18, v40);
      }
      else if ( (_DWORD)a3 == 9 )
      {
        v24 = *(__int64 **)(a1 + 488);
        v40[0] = a5 | 4;
        v25 = sub_A884B0(*v24, a4, a3, a4, a5);
        return sub_C80400(a1, a2, v25, v40);
      }
      else if ( (unsigned int)a3 > 0xB )
      {
        if ( (_DWORD)a3 == 12 )
        {
          v12 = sub_CC2920(*(_QWORD *)(a1 + 488), a4);
          v13 = *(_QWORD *)(a1 + 488);
          v14 = v12;
          v40[0] = a5 | 4;
          v15 = sub_CC2430(v13);
          v16 = sub_BDA860(a5, v15);
          return sub_C834E0((_QWORD *)a1, a2, v14, v16, v40);
        }
      }
      else
      {
        result = 1;
        if ( a2 != (_DWORD)a3 )
        {
          v40[0] = a5 | 4;
          return sub_C7C7D0(a1, a2, a3, v40);
        }
      }
    }
  }
  return result;
}

