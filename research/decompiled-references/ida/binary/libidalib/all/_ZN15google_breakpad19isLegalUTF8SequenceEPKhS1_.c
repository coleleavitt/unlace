_BOOL8 __fastcall google_breakpad::isLegalUTF8Sequence(
        google_breakpad *this,
        const unsigned __int8 *a2,
        const unsigned __int8 *a3)
{
  int v4; // [rsp+1Ch] [rbp-4h]

  v4 = byte_1DC0C0[*(unsigned __int8 *)this] + 1;
  return a2 >= (const unsigned __int8 *)this + v4 && sub_1C369F((char *)this, v4);
}

