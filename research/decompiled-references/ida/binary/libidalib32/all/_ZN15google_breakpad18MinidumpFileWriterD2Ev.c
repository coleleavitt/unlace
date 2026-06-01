// Alternative name is '_ZN15google_breakpad18MinidumpFileWriterD1Ev'
void __fastcall google_breakpad::MinidumpFileWriter::~MinidumpFileWriter(google_breakpad::MinidumpFileWriter *this)
{
  if ( *((_BYTE *)this + 4) )
    google_breakpad::MinidumpFileWriter::Close(this);
}

